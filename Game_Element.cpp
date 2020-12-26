#include "Game_Element.h"
Game_Element::Game_Element()
{

}
Game_Element::Game_Element(string Name,string Eat,int x,int y)
{
	Game_Element::Eat = Eat;
	Game_Element::Name = Name;
	Game_Element::x = x;
	Game_Element::y = y;
}
