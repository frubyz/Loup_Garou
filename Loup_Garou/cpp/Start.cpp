#include "../h/Main.h"
#include "../h/Start.h"

enum Roles {
    clairvoyant, cupid, hunter, little_girl, thiever, villager, werewolf, witch
};

std::vector<int> NumberOfRole = { 0, 0, 0, 0, 0, 0, 0, 0 };
std::vector<int> MaxRoleLimit = { 1, 1, 1, 1, 1, 2, 1, 1 };
std::vector<std::pair<std::string, std::string>> Players;

void StartGame() {

	int NumberOfPlayer;

	cout << "Number of player : ";
	cin >> NumberOfPlayer;
	cout << endl;

	for (int i = 0; i < NumberOfPlayer; i++)
	{
		AddPlayer(Players);
	}

}

void AddPlayer(vector<pair<string, string>>& Players) {

	string PlayerName;

	int RandomNumber;
	
	cout << "Player name : ";
	cin >> PlayerName;
	cout << endl;

    do {
        RandomNumber = rand() % 8;
    } while (NumberOfRole[RandomNumber] >= MaxRoleLimit[RandomNumber]);
	
	string PlayerRole = ChoiseRole(RandomNumber, PlayerName);

	Players.emplace_back(PlayerName, PlayerRole);
}

string ChoiseRole(int RandomNumber, string PlayerName) {

	string PlayerRole;

	switch (RandomNumber)
	{
	case clairvoyant:
		PlayerRole = "clairvoyant";
		CreateClairvoyant(PlayerName);
		break;

	case cupid:
		PlayerRole = "cupid";
		CreateCupid(PlayerName);
		break;

	case hunter:
		PlayerRole = "hunter";
		CreateHunter(PlayerName);
		break;

	case little_girl:
		PlayerRole = "little_girl";
		CreateLittle_Girl(PlayerName);
		break;

	case thiever:
		PlayerRole = "thiever";
		CreateThiever(PlayerName);
		break;

	case villager:
		PlayerRole = "villager";
		CreateVillager(PlayerName);
		break;

	case werewolf:
		PlayerRole = "werewolf";
		CreateWerewolf(PlayerName);
		break;

	case witch:
		PlayerRole = "witch";
		CreateWitch(PlayerName);
		break;
	}
	return PlayerRole;
}
