#pragma once

#include <iostream>

#include <SFML/Graphics.hpp>

#include "Entity.h"
#include "Ball.h"

using namespace std;
using namespace sf;

class EntityGrid
{
public:
	bool init();
	void draw(RenderWindow* window);
	void update(Ball* ball);
private:	
	Entity entities[10][4];

	// Texture's of entities
	Texture redEntity;
	Texture blueEntity;
	Texture greenEntity;
	Texture purpleEntity;
};
