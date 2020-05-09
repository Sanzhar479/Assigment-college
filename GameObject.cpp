#include "GameObject.h"
#include "TextureManager.h"
GameObject::GameObject(const char* texturesheet,int x, int y)
{
	
	objTexture = TextureManager::Loadtexture(texturesheet);
	xpos = x;
	ypos = y;
}

GameObject::~GameObject()
{
}

void GameObject::Update()
{
	xpos++;
	ypos++;
	
	srcRect.h = 66;
	srcRect.w = 51;
	srcRect.x = 0;
	srcRect.y = 0;

	destRect.x = xpos;
	destRect.y = ypos;
	destRect.w = srcRect.w*2;
	destRect.h = srcRect.h;
}

void GameObject::Render()
{
	SDL_RenderCopy(Game::renderer, objTexture, &srcRect, &destRect);
}
