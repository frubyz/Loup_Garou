#pragma once

class Villagers : public Players {
protected :
    Villagers(std::string Name, std::string Role) : Players(Name, Role) {

    }
public:
    Villagers(std::string Name) : Players(Name, "Villager") {

    }
};