#pragma once

class Werewolfs : public Villagers {
protected :
    Werewolfs(std::string Name, std::string Role) : Villagers(Name, Role) {

    }
public:
    Werewolfs(std::string Name) : Villagers(Name, "Wirewolf") {

    }
};