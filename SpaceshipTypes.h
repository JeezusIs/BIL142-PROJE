#pragma once
#include <iostream>
#include "Spaceship.h"


/*
1-Constructor ve Destructor eklenecek
2-
3-
4-
5-
*/


class FastShip :public Spaceship {
public:
    FastShip(int _flee, float _damageMultiplier) : Spaceship(_flee, _damageMultiplier) {};
   
    void status() {
        std::cout << "Hp: " << getHp << "\nFuel: " << getFuel << "\nCash: " << getCash << endl;
    }
};


class PowerfulShip :public Spaceship {
public:
    PowerfulShip(int _flee, float _damageMultiplier) : Spaceship(_flee, _damageMultiplier) {};

    void status() {
        std::cout << "Hp: " << getHp << "\nFuel: " << getFuel << "\nCash: " << getCash << endl;
    }
};


class BalancedShip :public Spaceship {
public:
    BalancedShip(int _flee, float _damageMultiplier) : Spaceship(_flee, _damageMultiplier) {};

    void status() {
        std::cout << "Hp: " << getHp << "\nFuel: " << getFuel << "\nCash: " << getCash << endl;
    }
};
