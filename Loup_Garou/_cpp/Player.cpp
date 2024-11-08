#pragma once
#include "../_h/Players.h"

extern std::map<std::string, Players> player;

void NewPlayer(std::string Name, std::string Role) {
    player[Name] = Players(Name, Role);
}

void SeePlayerRole(std::string PlayerName) {
    std::cout << player[PlayerName].GetRole() << std::endl;
}

void PlayerVote(std::string PlayerName) {
    player[PlayerName].Voted();
}