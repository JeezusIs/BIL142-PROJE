#include <iostream>
#include "Event.h"
#include "Spaceship.h"
#include "Manager.h"
#include <memory>
int main() {
    std::cout<<"Welcome to Space Voyager\n";
    std::shared_ptr<Spaceship>ship=getSelectedShip();
    RandomEventGenerator(ship);
    ScoreCalculator(ship);
    std::cout<<"The game has ended\n";
    return 0;
}