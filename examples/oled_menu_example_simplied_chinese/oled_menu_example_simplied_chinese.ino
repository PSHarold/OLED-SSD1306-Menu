#include <SSD1306Wire.h>
#include "OLEDMenuFonts.h"
#include "OLEDMenuManager.h"
#include "OLEDMenuTranslationsChinese.h"
#define digitalRead(x) ((GPIO_REG_READ(GPIO_IN_ADDRESS) >> x) & 1)

// 根据自己的连接定义管脚
SSD1306Wire display(0x3c, D1, D2);
OLEDMenuManager oledManager(&display);

unsigned long oledMenuFreezeStartTime;
unsigned long oledMenuFreezeTimeoutInMS;

OLED_MENU_HANDLER(dynamic);
OLED_MENU_HANDLER(freeze5);
OLED_MENU_HANDLER(freezeInput);
OLED_MENU_HANDLER(freezeSub);

enum MenuItemTag
{
    // tag不一定必须全局唯一，只要handler能够区分自己子菜单的tag即可
    MENU_TAG_NULL = 0,
};

void initOLEDMenu()
{
    // 获取根项。所有主菜单的子项必须以rootItem作为父项
    OLEDMenuItem *root = oledManager.rootItem;

    oledManager.registerItem(root, MENU_TAG_NULL, IMAGE_ITEM(DEMO_SHORT));
    oledManager.registerItem(root, MENU_TAG_NULL, IMAGE_ITEM(DEMO_LONG));

    // 一直滚动
    OLEDMenuItem *alwasyScrolling = oledManager.registerItem(root, MENU_TAG_NULL, IMAGE_ITEM(DEMO_LONG_ALWAYS_SCROLL));
    alwasyScrolling->alwaysScrolls = true;

    // 固定5个子项
    const char *strings[] = {"1", "2", "3", "4", "5"};
    OLEDMenuItem *sub5 = oledManager.registerItem(root, MENU_TAG_NULL, IMAGE_ITEM(DEMO_SUB_MENU_5));
    for (int i = 0; i < 5; ++i)
    {
        oledManager.registerItem(sub5, i, strings[i]);
    }

    // handler动态创建子项
    oledManager.registerItem(root, MENU_TAG_NULL, IMAGE_ITEM(DEMO_SUB_MENU_DYNAMIC), dynamic);

    // 锁定5秒后返回
    oledManager.registerItem(root, MENU_TAG_NULL, IMAGE_ITEM(DEMO_FREEZE_5s_RETURN), freeze5);

    // 锁定3秒后显示子项
    OLEDMenuItem *freeze3 = oledManager.registerItem(root, MENU_TAG_NULL, IMAGE_ITEM(DEMO_FREEZE_SUB_MENU), freezeSub);
    oledManager.registerItem(freeze3, MENU_TAG_NULL, "X");
    oledManager.registerItem(freeze3, MENU_TAG_NULL, "Y");
    oledManager.registerItem(freeze3, MENU_TAG_NULL, "Z");

    // 锁定，按确定键返回
    oledManager.registerItem(root, MENU_TAG_NULL, IMAGE_ITEM(DEMO_FREEZE_INPUT_RETURN), freezeInput);
}

OLED_MENU_HANDLER(dynamic)
{
    OLEDDISPLAY_TEXT_ALIGNMENT alignments[3] = {TEXT_ALIGN_CENTER, TEXT_ALIGN_LEFT, TEXT_ALIGN_RIGHT};
    const char *desc[3] = {"Center", "Left", "Right"};
    manager->clearSubItems(item);
    for (int i = 0; i < 3; ++i)
    {
        uint8_t r = rand() % 3;
        manager->registerItem(item, i, desc[r], nullptr, nullptr, alignments[r]);
    }
    return true;
}
OLED_MENU_HANDLER(freeze5)
{
    if (!isFirstTime)
    {
        if (millis() - oledMenuFreezeStartTime >= oledMenuFreezeTimeoutInMS)
        {
            manager->unfreeze();
        }
        return false; // 不显示子项，返回上一级
    }
    oledMenuFreezeStartTime = millis();
    oledMenuFreezeTimeoutInMS = 5000; // 锁定5秒
    OLEDDisplay *display = manager->getDisplay();
    display->clear();
    display->setColor(OLEDDISPLAY_COLOR::WHITE);
    display->drawXbm(CENTER_IMAGE(DEMO_TEXT_FREEZING_5S));
    display->display();
    manager->freeze();
    /* do something */
    return false; // freeze调用后，unfreeze调用前，返回值无意义
}
OLED_MENU_HANDLER(freezeInput)
{
    if (nav == OLEDMenuNav::ENTER)
    {
        manager->unfreeze();
        return false;
    }
    OLEDDisplay *display = manager->getDisplay();
    display->clear();
    display->setColor(OLEDDISPLAY_COLOR::WHITE);
    display->drawXbm(CENTER_IMAGE(DEMO_TEXT_FREEZING_INPUT));
    display->display();
    manager->freeze(); // 可以重复调用
    return false;
}
OLED_MENU_HANDLER(freezeSub)
{
    if (!isFirstTime)
    {
        if (millis() - oledMenuFreezeStartTime >= oledMenuFreezeTimeoutInMS)
        {
            manager->unfreeze();
            /* 其他操作代码 */
            return true; // 显示子项
        }
        /* 其他操作代码 */
        return false; // 不显示子项，一直调用handler
    }
    oledMenuFreezeStartTime = millis();
    oledMenuFreezeTimeoutInMS = 3000; // 锁定3秒
    OLEDDisplay *display = manager->getDisplay();
    display->clear();
    display->setColor(OLEDDISPLAY_COLOR::WHITE);
    display->drawXbm(CENTER_IMAGE(DEMO_TEXT_FREEZING_3S));
    display->display();
    manager->freeze();
    /* 其他操作代码 */
    return false; // freeze调用后，unfreeze调用前，返回值无意义
}

void setup()
{
    display.init();
    display.flipScreenVertically();
    initOLEDMenu();
}

void loop()
{
    /* 自行补充代码：检测按钮是否按下、转换为OLEDMenuNav传递给OLEDMenuManager::tick() */
    OLEDMenuNav btn = OLEDMenuNav::IDLE;
    oledManager.tick(btn);
}
