#pragma once

/*
    Andromeda Engine 

	A engine for Andromeda Engine
*/

#include <SDL2/SDL.h>
#include <stdio.h>

typedef struct {
	void* window;
}AEwindow;


AEwindow AEcreateWindow(int Width,int Height,char* Title){

	SDL_Window *win;

	//Init SDL
	if (SDL_Init(SDL_INIT_VIDEO) != 0){
		printf("[ERROR] SDL_Init: %s\n", SDL_GetError());
	}else{
		win = SDL_CreateWindow(
		Title,
		SDL_WINDOWPOS_UNDEFINED,
		SDL_WINDOWPOS_UNDEFINED,
		Width,
		Height,
		SDL_WINDOW_MAXIMIZED
		);

		if (win == NULL){
			printf("[ERROR] SDL_CreateWindow: %s\n",SDL_GetError());
		}
	}

	AEwindow window = {win};

	return window;
}
