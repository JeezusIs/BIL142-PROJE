#pragma once
#include <iostream>
#include "functions.h"
using namespace std;


class Spaceship {
public:
    Spaceship() = default;
    Spaceship(int _flee, int _damageMultiplier) : flee_posibility{ _flee }, damageMultiplier{ _damageMultiplier } {};

    inline float getHp() const {
        return Hp;
    }
    inline int getFuel() const {
        return fuel;
    }
    inline int getCash() const {
        return cash;
    }
    inline void setHp(float _newHp) {
        Hp = _newHp;
    }
    inline void setFuel(int _newFuel) {
        fuel = _newFuel;
    }
    inline void setCash(int _newCash) {
        cash = _newCash;
    }
    inline float getDamageMultiplier() const {
        return damageMultiplier;
    }
    inline int getEscapePosibility() const {
        return flee_posibility;
    }

   virtual void status();


protected:
    float Hp{ 100 };
    int fuel{ 100 };
    int cash{ 0 };
    float damageMultiplier{ 0 };
    int flee_posibility{ 0 };
};
