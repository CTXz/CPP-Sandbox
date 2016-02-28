/* Math Game by Patrick Pedersen (ctx.xda@gmail.com) 3.1.2016 */

#include <iostream>

#include "muth.h"


int result, solution;
		
void task1 ()
{
	cout << "What is 1+1 : ";
	cin >> result;
	
	if (result == 2)
	{
		ADD_POINT();
	}
	else
	{
		REMOVE_POINT();
		CHECK_GAME_OVER();
	}
}

void task2 ()
{
	cout << "What is 6+21 : ";
	cin >> result;
	
	if (result == 27)
	{
		ADD_POINT();
	}
	else
	{
		REMOVE_POINT();
		CHECK_GAME_OVER();
	}
}

void task3 ()
{
	cout << "What is 22*10 : ";
	cin >> result;
	
	if (result == 220)
	{
		GAME_WIN();
	}
	else
	{
		REMOVE_POINT();
		CHECK_GAME_OVER();
	}
}
