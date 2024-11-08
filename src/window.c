#include "window.h"

void initGame() {

    SDL_Init(SDL_INIT_VIDEO);

    game.window = SDL_CreateWindow("Game Window", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, 1280, 720, 0);

    game.renderer = SDL_CreateRenderer(game.window, -1, SDL_RENDERER_ACCELERATED);
    
    SDL_SetRenderDrawColor(game.renderer, 0, 0, 255, 255);

    SDL_RenderClear(game.renderer);

    SDL_SetRenderDrawColor(game.renderer, 255, 255, 255, 255);

    SDL_Rect rect = {220, 140, 200, 200};
    SDL_RenderFillRect(game.renderer, &rect);

    SDL_RenderPresent(game.renderer);

    SDL_Delay(2000);

    SDL_DestroyWindow(game.window);

    SDL_DestroyRenderer(game.renderer);

    SDL_Quit();

}
