#include "../h/Clairvoyants.h"

std::map<std::string, Clairvoyants*> Clairvoyant;

void CreateClairvoyant(const std::string& Name) {
    if (Clairvoyant.find(Name) == Clairvoyant.end()) {
        Clairvoyant[Name] = new Clairvoyants(Name);
    }
    else {
        std::cout << "Error: The player with the name '" << Name << "' already exists!" << std::endl;
    }
}

//// Fonction pour utiliser un objet en fonction de son nom
//void utiliserObjetGlobal(const std::string& nom) {
//    auto it = Clairvoyant.find(nom);
//    if (it != Clairvoyant.end()) { // Vérifie si l'objet existe
//        it->second->Print(); // Appelle la méthode afficherMessage de l'objet
//    }
//    else {
//        std::cout << "Objet avec le nom '" << nom << "' non trouve !" << std::endl;
//    }
//}

void DestroyClairvoyant() {
    for (auto& pair : Clairvoyant) {
        delete pair.second;
    }
    Clairvoyant.clear();
}
