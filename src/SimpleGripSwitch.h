#pragma once

class SimpleGripSwitch : public RE::BSTEventSink<RE::TESEquipEvent> {
    SimpleGripSwitch() = default;
    SimpleGripSwitch(const SimpleGripSwitch&) = delete;
    SimpleGripSwitch(SimpleGripSwitch&&) = delete;
    SimpleGripSwitch& operator=(const SimpleGripSwitch&) = delete;
    SimpleGripSwitch& operator=(SimpleGripSwitch&&) = delete;

public:
    [[nodiscard]] static SimpleGripSwitch* GetSingleton();
    RE::BSEventNotifyControl ProcessEvent(const RE::TESEquipEvent* event, RE::BSTEventSource<RE::TESEquipEvent>*);
};
