#include "../h/Witchers.h"

std::map<std::string, Witchers*> Witch;

void CreateWitch(const std::string& Name) {
    if (Witch.find(Name) == Witch.end()) {
        Witch[Name] = new Witchers(Name);
    }
    else {
        std::cout << "Error: The player with the name '" << Name << "' already exists!" << std::endl;
    }
}

//// Fonction pour utiliser un objet en fonction de son nom
//void utiliserObjetGlobal(const std::string& nom) {
//    auto it = Witch.find(nom);
//    if (it != Witch.end()) { // Vérifie si l'objet existe
//        it->second->Print(); // Appelle la méthode afficherMessage de l'objet
//    }
//    else {
//        std::cout << "Objet avec le nom '" << nom << "' non trouve !" << std::endl;
//    }
//}

void DestroyWitch() {
    for (auto& pair : Witch) {
        delete pair.second;
    }
    Witch.clear();
}
