#pragma once

#include <map>
#include <string>
#include <iostream>
#include "Villagers.h"

class Werewolfs : public Villagers {
public:
    Werewolfs(std::string Name) : Villagers({ { Name, "werewolf" } }) {

    }
};

// Déclaration de la variable globale Werewolf
extern std::map<std::string, Werewolfs*> Werewolf;

void CreateWerewolf(const std::string& Name);
void DestroyWerewolf();