#ifndef MAIN_H
#define MAIN_H

// NameSpace
using namespace std;


// Lib
#include <iostream>
#include <string>
#include <vector>
#include <time.h>
#include <random>
#include <cstdlib>
#include <map>


// .h
#include "Players.h"

#include "Clairvoyants.h"
#include "Cupids.h"
#include "Little_Girls.h"
#include "Hunters.h"
#include "Thievers.h"
#include "Villagers.h"
#include "Werewolfs.h"
#include "Witchers.h"


extern std::vector<int> NumberOfRole;
extern std::vector<int> MaxRoleLimit;
extern std::vector<std::pair<std::string, std::string>> Players;


// Fonction
	// void
void StartGame();

void StopGame();


#endif