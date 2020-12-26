#include "Animals.h"
Animals::Animals()
{

}
Animals::Animals(string Name, string Eat, int Num_Cells, bool Type,int Direction,int x,int y):Game_Element(Name,Eat,x,y)
{
	Animals::Type = Type;
	Animals::Num_Cells = Num_Cells;
	Animals::Direction = Direction;
}
