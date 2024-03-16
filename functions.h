#pragma once
#include <iostream>
#include "Spaceship.h"
#include <memory> 
 
int RandomNumberGenerator(int num1, int num2);
std::shared_ptr<Spaceship> selectedShip(); 
void RandomEventGenerator();
void ScoreCalculator();
