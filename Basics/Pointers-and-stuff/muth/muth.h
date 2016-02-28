/* Math Game by Patrick Pedersen (ctx.xda@gmail.com) 3.1.2016 */

#include <iostream>

using namespace std;

/* Points.cpp */

extern int gamestat;
extern int pointamount;
extern int zeropoints;

extern int *cal;

void ADD_POINT ();
void REMOVE_POINT ();
void ZERO_POINTS ();
void CHECK_GAME_OVER ();
void GAME_WIN ();

/* Tasks.cpp */

extern int result, solution;

void task1 ();
void task2 ();
void task3 ();

