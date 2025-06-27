#include "window_draw.h"

#include <raylib.h>

using namespace window_draw;

static void game_loop ();

/**
* cube_solver - core function for solving a virtual Rubik's cube
*
*/

void cube_solver(void)
{
	window window("Virtual Rubik's Cube Solver");

	window.init_3dcamera();

	while(!WindowShouldClose())
		game_loop();

	window.close_window();
}

/**
* game_loop - handles the game loop
*/

static void game_loop(void)
{

}
