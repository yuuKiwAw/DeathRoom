#pragma once
#include "SDL2/SDL_pixels.h"
#include "SDL2/SDL_shape.h"
#include <SDL2/SDL.h>

class SCENE_MANAGER {
private:
SDL_Window *window;
SDL_Surface *surface;

public:
SCENE_MANAGER(SDL_Window *window, SDL_Surface *surface);
void CHANGE_BG_COLOR(Uint8 r, Uint8 g, Uint8 b);
};