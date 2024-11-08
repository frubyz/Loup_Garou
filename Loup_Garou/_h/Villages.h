#pragma once

class Villages {

private:
    bool IsDay = true;
    std::string VillageName;

public:
    Villages(std::string Name) : VillageName(Name) {

    }

    std::string GetName() {
        return VillageName;
    }

    void Sleep() {
        std::cout << "The village of " << VillageName << " falls asleep" << std::endl;
        IsDay = false;
    }

    void WakeUp() {
        std::cout << "The village of " << VillageName << " wakes up" << std::endl;
        IsDay = true;
    }
};