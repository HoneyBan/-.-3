#include "Rabbit.h"
Rabbit::Rabbit() 
{

}
Rabbit::Rabbit(bool Victim, string Name, string Eat, int Num_Cells, bool Type, int Direction, int x, int y) :Animals(Name, Eat, Num_Cells, Type, Direction, x, y)
{
	Rabbit::Victim = Victim;
}