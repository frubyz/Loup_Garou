#include "../h/Villagers.h"

std::map<std::string, Villagers*> Villager;

void CreateVillager(const std::string& Name) {
    if (Villager.find(Name) == Villager.end()) {
        Villager[Name] = new Villagers(Name);
    }
    else {
        std::cout << "Error: The player with the name '" << Name << "' already exists!" << std::endl;
    }
}

//// Fonction pour utiliser un objet en fonction de son nom
//void utiliserObjetGlobal(const std::string& nom) {
//    auto it = Villager.find(nom);
//    if (it != Villager.end()) { // Vérifie si l'objet existe
//        it->second->Print(); // Appelle la méthode afficherMessage de l'objet
//    }
//    else {
//        std::cout << "Objet avec le nom '" << nom << "' non trouve !" << std::endl;
//    }
//}

void DestroyVillager() {
    for (auto& pair : Villager) {
        delete pair.second;
    }
    Villager.clear();
}
