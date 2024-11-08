#pragma once
#include "Main.h"

int main() {

    Villagers villager("Player_1");
    villager.Reveal();

    Hunters hunter("Player_2");
    hunter.Reveal();

    Werewolfs werewolf("Player_3");
    werewolf.Reveal();

    Witchers witch("Player_4");
    witch.Reveal();

    Clairvoyants clairvoyant("Player_5");
    clairvoyant.Reveal();

    Thievers thiever("Player_6");
    thiever.Reveal();

    Cupids cupid("Player_7");
    cupid.Reveal();

    Little_Girls little_girl("Player_8");
    little_girl.Reveal();

    return 0;
}
