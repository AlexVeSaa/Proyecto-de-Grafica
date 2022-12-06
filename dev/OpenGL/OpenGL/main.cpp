#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>

int main(int argc, char** argv) 
{
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Window* window = SDL_CreateWindow("OpenGl",SDL_WINDOWPOS_CENTERED,SDL_WINDOWPOS_CENTERED,800,600,0);
	SDL_Delay(6000);
	SDL_SetRenderDrawColor(g_pRenderer,0,0,0,200);
	return 0;

}

