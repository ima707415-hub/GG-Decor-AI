#include <Geode/Geode.hpp>
#include <Geode/modify/EditorUI.hpp>

using namespace geode::prelude;

// GG Decor AI
// Author: 777GDONLINE
// Version: 0.2.0

class $modify(GGDecorEditor, EditorUI) {

    bool init(LevelEditorLayer* levelEditor) {
        if (!EditorUI::init(levelEditor)) {
            return false;
        }

        auto button = CCMenuItemSpriteExtra::create(
            ButtonSprite::create("GG Decor AI"),
            this,
            menu_selector(GGDecorEditor::onOpenGGDecor)
        );

        auto menu = CCMenu::create();
        menu->addChild(button);
        menu->setPosition(
            CCDirector::sharedDirector()->getWinSize() / 2
        );

        this->addChild(menu);

        return true;
    }

    void onOpenGGDecor(CCObject*) {
        FLAlertLayer::create(
            "GG Decor AI - EXPERIMENTAL",
            "GG Decor AI is running in experimental mode.",
            "OK"
        )->show();
    }
};
