#include "Wolf.h"
Wolf::Wolf()
{

}
Wolf::Wolf(bool Predator, string Name, string Eat, int Num_Cells, bool Type, int Direction, int x, int y):Animals(Name,Eat, Num_Cells, Type, Direction, x, y)
{
	Wolf::Predator = Predator;
}