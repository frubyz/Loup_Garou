#pragma once

#include "Players.h"

class Villagers : public Players {
private:
    bool IsAlive = true;
    bool IsLover = false;

protected:
    Villagers(const std::vector<std::pair<std::string, std::string>>& PlayersData) : Players(PlayersData) {
    }

public:
    Villagers(std::string Name) : Players({ { Name, "villager" } }) {

    }

    void Vote() {

    }
};

// Déclaration de la variable globale Villager
extern std::map<std::string, Villagers*> Villager;

void CreateVillager(const std::string& Name);
void DestroyVillager();