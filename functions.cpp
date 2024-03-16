#include <iostream>
#include "functions.h"
#include "SpaceshipTypes.h"
#include <ctime> 
#include <cstdlib> 


int RandomNumberGenerator(int min, int max) {
    srand(static_cast<unsigned int>(time(0))); 
    return min + rand() % (max - min + 1);
}

std::shared_ptr<Spaceship> selectedShip() {
    int shipSelector;
    std::cout << "Please select your ship type. \n";
    std::cout << "1-Balanced ship\n";
    std::cout << "2-Fast ship\n";
    std::cout << "3-Powerful ship\n";
    std::cin >> shipSelector;

    if (shipSelector == 1) {
        return std::make_shared<BalancedShip>(50, 1);
    }
    else if (shipSelector == 2) {
        return std::make_shared<FastShip>(75, 1.5);
    }
    else if (shipSelector == 3) {
        return std::make_shared<PowerfulShip>(25, 0.5);
    }
    else {
        std::cout << "Please select a valid number.\n";
        return nullptr; 
    }
}
