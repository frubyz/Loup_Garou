#pragma once

#include <iostream>
#include <string>
#include <map>

class Players {
private:
    std::string Name;
    std::string Role;
    int Vote = 0;

public:
    Players() : Name(""), Role(""), Vote(0) {
    
    }

    Players(std::string Name, std::string Role) : Name(Name), Role(Role) {

    }

    std::string GetRole() {
        return Role;
    }

    void Reveal() {
        std::cout << Name << " is a " << Role << std::endl;
    }

    void Voted() {
        Vote++;
    }

    void SeeVote() {
        std::cout << Vote << std::endl;
    }
};
