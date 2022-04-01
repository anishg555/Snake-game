#pragma once

#include "tail.h"

class Snake
{
protected:
	static const int kiTails = 1;
	Tail tails[kiTails];
public:
	void bendTailLeft(int tailIndex);
	void bendTailRight(int tailIndex);
	void bendTailUp(int tailIndex);
	void bendTailDown(int tailIndex);
};