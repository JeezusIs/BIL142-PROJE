#include "event.h"
#include "spaceship.h"
#include "SpaceshipTypes.h"

void events::AstreoidBelt() {
	int posibility, i;
	posibility = RandomNumberGenerator(1, i, 0, 1 );
std:cout << "You're now entering a Astreoid Belt.\n";
	float damageTaken{ 0 };
	float normalDmg{ 10 };
	float totalDmg{ 0 };

	if (posibility = 1) {
		std::cout << "Our ship has taken damage while passing the Astreoid belt.\n";
		damageTaken += normalDmg * selectedShip->getHp();
		totalDmg = normalDmg + normalDmg;
		selectedShip->setHp(selectedShip->getHp() - totalDmg);
	}
	else {
		std::cout << "We've successfully passed Astreoid belt without taking any damage.\n";
	}

};

void events::AbondenedPlanet() {

};

void events::SpacePirates() {

};
