#include <iostream>
#include "functions.h"
#include "SpaceshipTypes.h"
#include "event.h"
#include <ctime> 
#include <cstdlib> 


int RandomNumberGenerator(int min, int max) {
    srand(static_cast<unsigned int>(time(0))); 
    return min + rand() % (max - min + 1);
}

std::shared_ptr<Spaceship> selectedShip() {
    int shipSelector;
    std::cout << "Please select your ship type. \n1-Balanced ship\n2-Fast ship\n3-Powerful ship\n";
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


void RandomEventGenerator() {
    std::shared_ptr<Spaceship> selectedShip = nullptr;
    selectedShip->status();
    int eventCounter{ 0 }, eventFirst{ 1 }, eventLast{ 3 }, totalEvent{ 5 };
    do {
        int eventNumber = RandomNumberGenerator(eventFirst, eventLast);
        switch (eventNumber) {
        case 1:
            ++eventCounter;
            events::AstreoidBelt;
            selectedShip->status();
            break;
        case 2:
            ++eventCounter;
            events::AbondenedPlanet;
            selectedShip->status();
            break;
        case 3:
            ++eventCounter;
            events::SpacePirates;
            selectedShip->status();
            break;
        default:
            break;
        }
        if (selectedShip->getFuel() <= 1) {
            std::cout << "Low fuel! GAME OVER...\n";
            break;
        }
        else if (selectedShip->getHp() <= 1) {
            std::cout << "Low health! GAME OVER...\n";
        }
    } while (eventCounter < totalEvent) {
        if (eventCounter == totalEvent) {
            std::cout << "Congratilations, you've finished the game!\n";
        }
    }
    
}


void ScoreCalculator() {
    std::shared_ptr<Spaceship> selectedShip = nullptr;
    int healthMultiplier{ 10 }, fuelMultiplier{ 5 }, cashMultiplier{ 10 };
    int endGameScore;
    endGameScore = (selectedShip->getHp() * healthMultiplier) + (selectedShip->getFuel() * fuelMultiplier) + (selectedShip->getCash() * cashMultiplier);

}
