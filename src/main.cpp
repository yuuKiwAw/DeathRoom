#include "SDL2/SDL.h"
#include "SDL2/SDL_events.h"
#include "SDL2/SDL_video.h"
#include "sceneManager.h"

const int SCREEN_WIDTH = 800;
const int SCREEN_HEIGHT = 600;

int WinMain(int argc, char *argv[])
{
    SDL_Window *pWindow = NULL;
    SDL_Surface *pSurface = NULL;

    SDL_Init(SDL_INIT_EVERYTHING);

    pWindow = SDL_CreateWindow("DeathRoom", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, SCREEN_WIDTH, SCREEN_HEIGHT, 0);
    pSurface = SDL_GetWindowSurface(pWindow);

    SCENE_MANAGER sceneManager(pWindow, pSurface);

    while (1) {
        SDL_Event event;

        if (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                break;
            }
        }

        //? TO-DO
        //? Render
        sceneManager.CHANGE_BG_COLOR(0, 0, 0);


        // Renderer
        SDL_UpdateWindowSurface(pWindow);
    }

    SDL_DestroyWindow(pWindow);
    SDL_Quit();

    return 0;
} 