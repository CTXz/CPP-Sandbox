/* Math Game by Patrick Pedersen (ctx.xda@gmail.com) 3.1.2016 */

#include <iostream>

#include "muth.h"

int gamestat;
int pointamount = 0;
int zeropoints = 0;

int *cal = &pointamount;

void ADD_POINT ()
{
	*cal = pointamount++;
}

void REMOVE_POINT ()
{
	*cal = pointamount--;
}

void ZERO_POINTS ()
{
	*cal = zeropoints;
}

void CHECK_GAME_OVER ()
{
	if (*cal == 0)
	{
		cout << "Game over" << endl;
		gamestat = 1;
	}
}

void GAME_WIN ()
{
		cout << "Game over" << endl;
		gamestat = 2;
}
