#pragma once
#include <string>
#include<iostream>
using namespace std;
class Game_Element
{
public:
	string Name;
	string Eat;
	int x;
	int y;

	Game_Element();
	Game_Element(string Name, string Eat,int x,int y);
};

