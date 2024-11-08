#pragma once
#pragma once

class Players {
private:
    std::string m_Name;
    std::string m_Role;
    int Ip;

public:
    Players(std::string Name, std::string Role) : m_Name(Name), m_Role(Role) {

    }

    void Reveal() {
        std::cout << m_Name << " is a " << m_Role << std::endl;
    }
};