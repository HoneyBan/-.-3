#pragma once
#include "Animals.h"
class Wolf :
	public Animals
{
public:
	bool Predator;
	Wolf();
	Wolf(bool Predator,string Name, string Eat, int Num_Cells, bool Type, int Direction, int x, int y);
};

