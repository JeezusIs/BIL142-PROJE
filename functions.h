#ifndef BIL142_GENERALFUNCS_H
#define BIL142_GENERALFUNCS_H

#pragma once
#include <iostream>
#include "spaceship.h"
#include "SpaceshipTypes.h"
#include <memory> 
 
int RandomNumberGenerator(int num1, int num2);
std::shared_ptr<Spaceship> getSelectedShip(); 
void RandomEventGenerator();
void ScoreCalculator();

#endif //BIL142_GENERALFUNCS_H
