#pragma once

class Villagers : public Players {
private :
    bool IsAlive = true;
    bool IsLover = false;

protected :
    Villagers(std::string Name, std::string Role) : Players(Name, Role) {

    }

public :
    Villagers(std::string Name) : Players(Name, "Villager") {

    }

    void Vote() {

    }
};