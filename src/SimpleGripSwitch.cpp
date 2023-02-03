#include "SimpleGripSwitch.h"

SimpleGripSwitch* SimpleGripSwitch::GetSingleton() {
    static SimpleGripSwitch singleton;
    return &singleton;
}

RE::BSEventNotifyControl SimpleGripSwitch::ProcessEvent(const RE::TESEquipEvent* event,
                                                        RE::BSTEventSource<RE::TESEquipEvent>*) {
    return RE::BSEventNotifyControl::kContinue;
}