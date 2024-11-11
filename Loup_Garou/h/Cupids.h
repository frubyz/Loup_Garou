#pragma once

#include <map>
#include <string>
#include <iostream>
#include "Villagers.h"

class Cupids : public Villagers {
public:
    Cupids(std::string Name) : Villagers({ { Name, "cupid" } }) {

    }
};

// Déclaration de la variable globale Cupid
extern std::map<std::string, Cupids*> Cupid;

void CreateCupid(const std::string& Name);
void DestroyCupid();