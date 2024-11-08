#pragma once
#pragma once

class Players {
private :
    std::string Name;
    std::string Role;
    int Ip;

public :
    Players(std::string Name, std::string Role) : Name(Name), Role(Role) {

    }

    void Reveal() {
        std::cout << Name << " is a " << Role << std::endl;
    }
    void Reveal(std::string VillageName) {
        std::cout << Name << " is a " << Role << " in the village of " << VillageName << std::endl;
    }
};