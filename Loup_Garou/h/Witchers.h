#pragma once

#include <map>
#include <string>
#include <iostream>
#include "Villagers.h"

class Witchers : public Villagers {
public:
    Witchers(std::string Name) : Villagers({ { Name, "witch" } }) {

    }
};

// Déclaration de la variable globale Witch
extern std::map<std::string, Witchers*> Witch;

void CreateWitch(const std::string& Name);
void DestroyWitch();