#include "event.h"
#include "spaceship.h"
#include "SpaceshipTypes.h"
#include "functions.h"


void events::AstreoidBelt() {
	std::shared_ptr<Spaceship> selectedShip = nullptr;
	int posibility, i;
	posibility = RandomNumberGenerator(0, 1 );
std::cout << "You're now entering a Astreoid Belt.\n";
	float damageTaken{ 0 };
	float normalDmg{ 10 };
	float totalDmg{ 0 };

	if (posibility == 1) {
		std::cout << "Our ship has taken damage while passing the Astreoid belt.\n";
		damageTaken += normalDmg * selectedShip->getHp();
		totalDmg = normalDmg + damageTaken;
		selectedShip->setHp(selectedShip->getHp() - totalDmg);
	}
	else {
		std::cout << "We've successfully passed Astreoid belt without taking any damage.\n";
	}

};










void events::AbondenedPlanet() {
	std::shared_ptr<Spaceship> selectedShip = nullptr;
	int posibility, i;
		posibility = RandomNumberGenerator(0, 2);
std:cout << "We've found a abondened planet\n";

	if (posibility == 0) {
	std::cout << "We've found a treausure\n";
		selectedShip->setCash(selectedShip->getCash() + 10);
	}
	else if (posibility == 1) {
	std:cout << "Planet is completely abondened.\n";
	}
	else if (posibility == 2) {
	std::cout << "Good lord, we've encountered space pirates!\n";
	}
};










void events::SpacePirates() {
	std::shared_ptr<Spaceship> selectedShip = nullptr;
	int posibility1, posibility2, dialogueOption, tributePosibility, i;
	int IWantToFlee;

	float damageTaken{ 0 };
	float normalDmg{ 30 };
	float totalDmg{ 0 };

	posibility1 = RandomNumberGenerator(0, 2);
	tributePosibility = RandomNumberGenerator(0, 2);
	posibility2 = RandomNumberGenerator(0, 1);
	
	
std:cout << "We've encountered space pirates.\n Pirate: Fool voyager in the search for meaning, emboldened by the sin of ambition. Thee shall not pass.\n";
std:cout << "1-I believe we can settle this.(Pay tribute)\n2-...(Attack)\n3-...(Flee)";
std:cin >> dialogueOption;


	if (dialogueOption == 1) {
		switch (tributePosibility) {
		case 0:
			selectedShip->setCash(selectedShip->getCash() - 10);
		std::cout << "Pirates have taken 10 credits.\nPirates:We better not see you around here any time soon.\n";
			break;
		case 1:
			selectedShip->setCash(selectedShip->getCash() - 20);
		std::cout << "Pirates have taken 20 credits.\nPirates:We better not see you around here any time soon.\n";
			break;
		case 2:
			selectedShip->setCash(selectedShip->getCash() - 30);
		std::cout << "Pirates have taken 30 credits.\nPirates:We better not see you around here any time soon.\n";
			break;
		}
	}


	if (dialogueOption == 2) {
		switch (posibility2) {
		case 0:
			damageTaken += normalDmg * selectedShip->getHp();
			totalDmg = normalDmg + damageTaken;
			selectedShip->setHp(selectedShip->getHp() - totalDmg);
		std::cout << "We've defeated the pirates.\n";
			break;
		case 1:
			selectedShip->setCash(selectedShip->getCash() + 10);
		std::cout << "We've defeated those pirates.\n";
			break;
		}
	}


	if (dialogueOption == 3) {
		if (selectedShip->getCash() >= 33) {
			int fled = RandomNumberGenerator(0, 100);
			if (fled < selectedShip->getEscapePosibility()) {
			std::cout << "We've escaped successfully.\n";
				selectedShip->setFuel(selectedShip->getFuel() - 33);
			}
			else {
			std::cout << "We've failed to flee.\n";
				selectedShip->setFuel(selectedShip->getFuel() - 33);
			events:SpacePirates;
			}
		}
	}
};
