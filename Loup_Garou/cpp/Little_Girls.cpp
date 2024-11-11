#include "../h/Little_Girls.h"

std::map<std::string, Little_Girls*> Little_Girl;

void CreateLittle_Girl(const std::string& Name) {
    if (Little_Girl.find(Name) == Little_Girl.end()) {
        Little_Girl[Name] = new Little_Girls(Name);
    }
    else {
        std::cout << "Error: The player with the name '" << Name << "' already exists!" << std::endl;
    }
}

//// Fonction pour utiliser un objet en fonction de son nom
//void utiliserObjetGlobal(const std::string& nom) {
//    auto it = Little_Girl.find(nom);
//    if (it != Little_Girl.end()) { // Vérifie si l'objet existe
//        it->second->Print(); // Appelle la méthode afficherMessage de l'objet
//    }
//    else {
//        std::cout << "Objet avec le nom '" << nom << "' non trouve !" << std::endl;
//    }
//}

void DestroyLittle_Girl() {
    for (auto& pair : Little_Girl) {
        delete pair.second;
    }
    Little_Girl.clear();
}
