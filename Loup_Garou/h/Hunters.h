#pragma once

#include <map>
#include <string>
#include <iostream>
#include "Villagers.h"

class Hunters : public Villagers {
public:
    Hunters(std::string Name) : Villagers({ { Name, "hunter" } }) {

    }
};

// D�claration de la variable globale DestroyHunter
extern std::map<std::string, Hunters*> Hunter;

void CreateHunter(const std::string& Name);
void DestroyHunter();