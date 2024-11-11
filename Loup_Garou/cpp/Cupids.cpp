#include "../h/Cupids.h"

std::map<std::string, Cupids*> Cupid;

void CreateCupid(const std::string& Name) {
    if (Cupid.find(Name) == Cupid.end()) {
        Cupid[Name] = new Cupids(Name);
    }
    else {
        std::cout << "Error: The player with the name '" << Name << "' already exists!" << std::endl;
    }
}

//// Fonction pour utiliser un objet en fonction de son nom
//void utiliserObjetGlobal(const std::string& nom) {
//    auto it = Cupid.find(nom);
//    if (it != Cupid.end()) { // Vérifie si l'objet existe
//        it->second->Print(); // Appelle la méthode afficherMessage de l'objet
//    }
//    else {
//        std::cout << "Objet avec le nom '" << nom << "' non trouve !" << std::endl;
//    }
//}

void DestroyCupid() {
    for (auto& pair : Cupid) {
        delete pair.second;
    }
    Cupid.clear();
}
