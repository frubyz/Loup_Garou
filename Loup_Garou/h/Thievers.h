#pragma once

#include <map>
#include <string>
#include <iostream>
#include "Villagers.h"

class Thievers : public Villagers {
public:
    Thievers(std::string Name) : Villagers({ { Name, "thiever" } }) {

    }
};

// Déclaration de la variable globale Thiever
extern std::map<std::string, Thievers*> Thiever;

void CreateThiever(const std::string& Name);
void DestroyThiever();