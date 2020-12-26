#pragma once
#include "Game_Element.h"
class Animals :
	public Game_Element
{
public:
	int Num_Cells;
	bool Type;
	int Direction;
	Animals();
	Animals(string Name, string Eat,int Num_Cells, bool Type,int Direction,int x,int y);
};

