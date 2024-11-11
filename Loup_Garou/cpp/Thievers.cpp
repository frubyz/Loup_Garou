#include "../h/Thievers.h"

std::map<std::string, Thievers*> Thiever;

void CreateThiever(const std::string& Name) {
    if (Thiever.find(Name) == Thiever.end()) {
        Thiever[Name] = new Thievers(Name);
    }
    else {
        std::cout << "Error: The player with the name '" << Name << "' already exists!" << std::endl;
    }
}

//// Fonction pour utiliser un objet en fonction de son nom
//void utiliserObjetGlobal(const std::string& nom) {
//    auto it = Thiever.find(nom);
//    if (it != Thiever.end()) { // Vérifie si l'objet existe
//        it->second->Print(); // Appelle la méthode afficherMessage de l'objet
//    }
//    else {
//        std::cout << "Objet avec le nom '" << nom << "' non trouve !" << std::endl;
//    }
//}

void DestroyThiever() {
    for (auto& pair : Thiever) {
        delete pair.second;
    }
    Thiever.clear();
}
