#include <Geode/Geode.hpp>
#include <Geode/modify/MenuLayer.hpp>
#include <Geode/modify/GameManager.hpp>

using namespace geode::prelude;

// Hook MenuLayer to confirm Main Level Changer loads successfully
class $modify(CustomMenuLayer, MenuLayer) {
    bool init() {
        if (!MenuLayer::init()) {
            return false;
        }

        FLAlertLayer::create(
            "Main Level Changer",
            "Hello <cG>Galaxy2005</c>! Main Level Changer is active.",
            "OK"
        )->show();

        return true;
    }
};
