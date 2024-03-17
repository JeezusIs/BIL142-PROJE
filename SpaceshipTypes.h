#ifndef BIL142_BALANCEDSHIP_H
#define BIL142_BALANCEDSHIP_H

#pragma once
#include "Spaceship.h"

class FastShip : public Spaceship {
public:
    FastShip(int _flee, float _damageMultiplier) : Spaceship(_flee, _damageMultiplier) {};

    void status() {
        std::cout << "Hp: " << getHp() << "\nFuel: " << getFuel() << "\nCash: " << getCash() << std::endl;
    }
};

class PowerfulShip : public Spaceship {
public:
    PowerfulShip(int _flee, float _damageMultiplier) : Spaceship(_flee, _damageMultiplier) {};

    void status() {
        std::cout << "Hp: " << getHp() << "\nFuel: " << getFuel() << "\nCash: " << getCash() << std::endl;
    }
};

class BalancedShip : public Spaceship {
public:
    BalancedShip(int _flee, float _damageMultiplier) : Spaceship(_flee, _damageMultiplier) {};

    void status() {
        std::cout << "Hp: " << getHp() << "\nFuel: " << getFuel() << "\nCash: " << getCash() << std::endl;
    }
};

#endif //BIL142_BALANCEDSHIP_H
