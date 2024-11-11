#include "../h/Hunters.h"

std::map<std::string, Hunters*> Hunter;

void CreateHunter(const std::string& Name) {
    if (Hunter.find(Name) == Hunter.end()) {
        Hunter[Name] = new Hunters(Name);
    }
    else {
        std::cout << "Error: The player with the name '" << Name << "' already exists!" << std::endl;
    }
}

//// Fonction pour utiliser un objet en fonction de son nom
//void utiliserObjetGlobal(const std::string& nom) {
//    auto it = Hunter.find(nom);
//    if (it != Hunter.end()) { // Vérifie si l'objet existe
//        it->second->Print(); // Appelle la méthode afficherMessage de l'objet
//    }
//    else {
//        std::cout << "Objet avec le nom '" << nom << "' non trouve !" << std::endl;
//    }
//}

void DestroyHunter() {
    for (auto& pair : Hunter) {
        delete pair.second;
    }
    Hunter.clear();
}
