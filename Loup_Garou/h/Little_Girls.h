#pragma once

#include <map>
#include <string>
#include <iostream>
#include "Villagers.h"

class Little_Girls : public Villagers {
public:
    Little_Girls(std::string Name) : Villagers({ { Name, "little_girl" } }) {

    }
};

// Déclaration de la variable globale Little_Girl
extern std::map<std::string, Little_Girls*> Little_Girl;

void CreateLittle_Girl(const std::string& Name);
void DestroyLittle_Girl();