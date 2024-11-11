#pragma once

#include <map>
#include <string>
#include <iostream>
#include "Villagers.h"

class Clairvoyants : public Villagers {
public:
    Clairvoyants(std::string Name) : Villagers({ { Name, "clairvoyant" } }) {
    }
};

// Déclaration de la variable globale Clairvoyant
extern std::map<std::string, Clairvoyants*> Clairvoyant;

void CreateClairvoyant(const std::string& Name);
void DestroyClairvoyant();
