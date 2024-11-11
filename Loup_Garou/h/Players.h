#ifndef PLAYERS_H
#define PLAYERS_H

#include <iostream>
#include <string>
#include <vector>
#include <map>

class Players {
private:
    struct PlayerInfo {
        std::string name;
        std::string role;

        PlayerInfo(const std::string& name, const std::string& role)
            : name(name), role(role) {}
    };

    int Ip[4] = { 0, 0, 0, 0 };
    int Vote = 0;

    std::vector<PlayerInfo> playerList;

public:
    Players(const std::vector<std::pair<std::string, std::string>>& playersData) {
        for (const auto& data : playersData) {
            playerList.push_back(PlayerInfo(data.first, data.second));
        }
    }

    std::string GetRole(const std::string& playerName) {
        for (const auto& player : playerList) {
            if (player.name == playerName) {
                return player.role;
            }
        }
        return ""; // Si le joueur n'est pas trouvé
    }

    std::string GetName(const std::string& playerName) {
        for (const auto& player : playerList) {
            if (player.name == playerName) {
                return player.name;
            }
        }
        return ""; // Si le joueur n'est pas trouvé
    }
};

#endif // PLAYERS_H
