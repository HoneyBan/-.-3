#pragma once
#include "Animals.h"
class Rabbit :
	public Animals
{
public:
	bool Victim;
	Rabbit();
	Rabbit(bool Victim,string Name, string Eat, int Num_Cells, bool Type, int Direction, int x, int y);
};

