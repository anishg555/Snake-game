#include "../include/snake.h"

void Snake::bendTailUp(int tailIndex)
{
	if (tailIndex > 0 && tailIndex < kiTails)
	{
		tails[tailIndex].Up();
	}
}

void Snake::bendTailDown(int tailIndex)
{
	if (tailIndex > 0 && tailIndex < kiTails)
	{
		tails[tailIndex].Down();
	}
}

void Snake::bendTailLeft(int tailIndex)
{
	if (tailIndex > 0 && tailIndex < kiTails)
	{
		tails[tailIndex].Left();
	}
}

void Snake::bendTailRight(int tailIndex)
{
	if (tailIndex > 0 && tailIndex < kiTails)
	{
		tails[tailIndex].Right();
	}
}