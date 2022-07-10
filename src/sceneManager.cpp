#include "sceneManager.h"
#include "SDL2/SDL_stdinc.h"
#include "SDL2/SDL_surface.h"

SCENE_MANAGER::SCENE_MANAGER(SDL_Window *window, SDL_Surface *surface) {
    this->window = window;
    this->surface = surface;
}

void SCENE_MANAGER::CHANGE_BG_COLOR(Uint8 r, Uint8 g, Uint8 b) {
    SDL_FillRect(surface, NULL, SDL_MapRGB(surface->format, r, g, b));
}