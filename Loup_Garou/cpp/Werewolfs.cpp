#include "../h/Werewolfs.h"

std::map<std::string, Werewolfs*> Werewolf;

void CreateWerewolf(const std::string& Name) {
    if (Werewolf.find(Name) == Werewolf.end()) {
        Werewolf[Name] = new Werewolfs(Name);
    }
    else {
        std::cout << "Error: The player with the name '" << Name << "' already exists!" << std::endl;
    }
}

//// Fonction pour utiliser un objet en fonction de son nom
//void utiliserObjetGlobal(const std::string& nom) {
//    auto it = Werewolf.find(nom);
//    if (it != Werewolf.end()) { // Vérifie si l'objet existe
//        it->second->Print(); // Appelle la méthode afficherMessage de l'objet
//    }
//    else {
//        std::cout << "Objet avec le nom '" << nom << "' non trouve !" << std::endl;
//    }
//}

void DestroyWerewolf() {
    for (auto& pair : Werewolf) {
        delete pair.second;
    }
    Werewolf.clear();
}
