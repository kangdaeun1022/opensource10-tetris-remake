#ifndef RENDERER_HPP
#define RENDERER_HPP

#include <string>

#include <SDL.h>
#include <SDL_ttf.h>

#include "texture.hpp"

class Texture;

class Renderer
{  
public:
    void initialize (SDL_Window *window);
    ~Renderer ();
    void setBackgroundColor(Uint8 r, Uint8 g, Uint8 b);
    void clearScreen ();
    void renderTexture (Texture *texture, int x, int y);
    void updateScreen ();
    SDL_Renderer *mSDLRenderer = nullptr;

    TTF_Font *mediumFont;
    TTF_Font *bigFont;
};

#endif // RENDERER_HPP
