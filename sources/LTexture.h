#ifndef __LTEXTURE_H_INCLUDED__
#define __LTEXTURE_H_INCLUDED__

#include <string>
#include <SDL.h>
#include <SDL_image.h>

class LTexture
{
public:
	//Initializes variables
	LTexture();

	//Deallocates memory
	~LTexture();

	//Loads image at specified path
	bool loadFromFile(std::string path);

#ifdef _SDL_TTF_H
	//Creates image from font string
	bool loadFromRenderedText(std::string textureText, SDL_Color textColor);
#endif

	//Deallocates texture
	void free();

	// Set renderer object
	void setRenderer(SDL_Renderer* gRenderer);

	//Set color modulation
	void setColor(Uint8 red, Uint8 green, Uint8 blue);

	//Set blending
	void setBlendMode(SDL_BlendMode blending);

	//Set alpha modulation
	void setAlpha(Uint8 alpha);

	//Renders texture at given point
	void render(int x, int y, SDL_Rect* clip = NULL, double angle = 0.0, SDL_Point* center = NULL, SDL_RendererFlip flip = SDL_FLIP_NONE);

	//Gets image dimensions
	int getWidth();
	int getHeight();

private:
	//The actual hardware texture
	SDL_Texture* mTexture;
	
	// Renderer
	SDL_Renderer* gRenderer;

	//Image dimensions
	int mWidth;
	int mHeight;
};

#endif // __LTEXTURE_H_INCLUDED__