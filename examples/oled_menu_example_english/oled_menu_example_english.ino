#include <SSD1306Wire.h>
#include "OLEDMenuFonts.h"
#include "OLEDMenuManager.h"
#include "OLEDMenuTranslationsEnglish.h"
#define digitalRead(x) ((GPIO_REG_READ(GPIO_IN_ADDRESS) >> x) & 1)

// use your pin numbers
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
    // tags don't have to be globally distinctive
    // you don't need to define a enum class
    // as long as your handler can differentiate its sub items
    MENU_TAG_NULL = 0,
};

void initOLEDMenu()
{
    // get the root item (main menu)
    // every item on main menu is a child of the root item
    OLEDMenuItem *root = oledManager.rootItem;

    oledManager.registerItem(root, MENU_TAG_NULL, IMAGE_ITEM(DEMO_SHORT));
    oledManager.registerItem(root, MENU_TAG_NULL, IMAGE_ITEM(DEMO_LONG));

    // always scroll
    OLEDMenuItem *alwasyScrolling = oledManager.registerItem(root, MENU_TAG_NULL, IMAGE_ITEM(DEMO_LONG_ALWAYS_SCROLL));
    alwasyScrolling->alwaysScrolls = true;

    // create 5 sub items
    const char *strings[] = {"1", "2", "3", "4", "5"};
    OLEDMenuItem *sub5 = oledManager.registerItem(root, MENU_TAG_NULL, IMAGE_ITEM(DEMO_SUB_MENU_5));
    for (int i = 0; i < 5; ++i)
    {
        oledManager.registerItem(sub5, i, strings[i]);
    }

    // handler will dynamically create sub items
    oledManager.registerItem(root, MENU_TAG_NULL, IMAGE_ITEM(DEMO_SUB_MENU_DYNAMIC), dynamic);

    // freeze for 5 seconds then return
    oledManager.registerItem(root, MENU_TAG_NULL, IMAGE_ITEM(DEMO_FREEZE_5s_RETURN), freeze5);

    // freeze for 3 seconds, then show sub menu
    OLEDMenuItem *freeze3 = oledManager.registerItem(root, MENU_TAG_NULL, IMAGE_ITEM(DEMO_FREEZE_SUB_MENU), freezeSub);
    oledManager.registerItem(freeze3, MENU_TAG_NULL, "X");
    oledManager.registerItem(freeze3, MENU_TAG_NULL, "Y");
    oledManager.registerItem(freeze3, MENU_TAG_NULL, "Z");

    // freeze until Enter is pressed again
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
        return false; // don't show sub items, go back instead
    }
    oledMenuFreezeStartTime = millis();
    oledMenuFreezeTimeoutInMS = 5000; // freeze for 5 seconds
    OLEDDisplay *display = manager->getDisplay();
    display->clear();
    display->setColor(OLEDDISPLAY_COLOR::WHITE);
    display->drawXbm(CENTER_IMAGE(DEMO_TEXT_FREEZING_5S));
    display->display();
    manager->freeze();
    /* do something */
    return false; // won't make a difference until unfreezed
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
    manager->freeze(); // no need to check isFirstTime
    return false;
}
OLED_MENU_HANDLER(freezeSub)
{
    if (!isFirstTime)
    {
        if (millis() - oledMenuFreezeStartTime >= oledMenuFreezeTimeoutInMS)
        {
            manager->unfreeze();
            /* do something */
            return true; // show sub items (enter this menu)
        }
        /* do something */
        return false; // don't show sub items, go back instead
    }
    oledMenuFreezeStartTime = millis();
    oledMenuFreezeTimeoutInMS = 3000; // freeze for 3 seconds
    OLEDDisplay *display = manager->getDisplay();
    display->clear();
    display->setColor(OLEDDISPLAY_COLOR::WHITE);
    display->drawXbm(CENTER_IMAGE(DEMO_TEXT_FREEZING_3S));
    display->display();
    manager->freeze();
    /* do something */
    return false; // won't make a difference if isFirstTime == true
}

void setup()
{
    display.init();
    display.flipScreenVertically();
    initOLEDMenu();
}

void loop()
{
    /* Check if any button was pressed, convert to OLEDMenuNav and pass it to OLEDMenuManager::tick() */
    OLEDMenuNav btn = OLEDMenuNav::IDLE;
    oledManager.tick(btn);
}
