#pragma once
#include <iostream>
#include "spaceship.h"
#include "SpaceshipTypes.h"
#include <memory> 
 
int RandomNumberGenerator(int num1, int num2);
std::shared_ptr<Spaceship> selectedShip(); 
void RandomEventGenerator();
void ScoreCalculator();
