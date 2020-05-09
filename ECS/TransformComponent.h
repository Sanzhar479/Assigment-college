#pragma once
#include "Components.h"
#include "../Vector2D.h"
struct TransformComponent : public Component
{
public:
	
	Vector2D position;
	Vector2D velocity;
	Vector2D gravitation;

	int height = 13;
	int width = 15;
	int scale = 4;
	int speed = 3;

	TransformComponent() 
	{
		position.Zero();
	}

	
	TransformComponent(int sc)
	{
		position.x = 400;
		position.y = 400;
		scale = sc;
	}

	TransformComponent(float x, float y)
	{
		position.Zero();
	}

	TransformComponent(float x, float y, int h, int w, int sc)
	{
		position.x = x;
		position.y = y;
		height = h;
		width = w;
		scale = sc;
	}

	void init() override
	{
		velocity.Zero();
	}
	void update() override
	{
		position.x += static_cast<int>(velocity.x * speed);
		position.y += static_cast<int>(velocity.y * speed);
	}
	

};