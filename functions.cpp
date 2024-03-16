#include <iostream>
#include"functions.h"
#include "spaceship.h"
#include "SpaceshipTypes.h"

void RandomNumberGenerator(int num1, int num2, int num3, int num4) {
    num1 = time(0);
    srand(num1);
    num2 = num3 + rand() % num4;
}


std::shared_ptr<Spaceship> selectedship() {
    int shipSelector;
    static std::shared_ptr<Spaceship> selectedShip;
std::cout << "Please select your ship type. \n";
std::cout << "1-Balanced ship\n";
std::cout << "2-Fast ship\n";
std::cout << "3-Powerful ship\n";
std::cin >> shipSelector;



    if (shipSelector == 1) {
        selectedShip = std::make_shared<BalancedShip>(50, 1);
    }
    else if (shipSelector == 2) {
        selectedShip = std::make_shared<FastShip>(75, 1.5);
    }
    else if (shipSelector == 3) {
        selectedShip = std::make_shared<PowerfulShip>(25, 0.5);
    }
    else {
    std::cout << "Please select a valid number.\n";
    }
    return selectedShip;
}
