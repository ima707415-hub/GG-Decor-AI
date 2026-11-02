#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>

using namespace geode::prelude;

// GG Decor AI
// Author: 777GDONLINE
// Version: 0.2.0

class $modify(GGDecorMenu, MenuLayer) {

    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        auto button = CCMenuItemSpriteExtra::create(
            ButtonSprite::create("GG Decor AI"),
            this,
            menu_selector(GGDecorMenu::onOpenGGDecor)
        );

        auto menu = CCMenu::create();
        menu->addChild(button);
        menu->setPosition(
            CCDirector::sharedDirector()
                ->getWinSize() / 2
        );

        this->addChild(menu);

        return true;
    }

    void onOpenGGDecor(CCObject*) {
        FLAlertLayer::create(
            "GG Decor AI - EXPERIMENTAL",
            "This mod is experimental and may break your level.<cr/><cr/>Please make a copy of your level before using it.",
            "I UNDERSTAND"
        )->show();
    }
};
