#pragma once
#include <iostream>

#include <SFML/Graphics.hpp>

#include "Settings.h"

using namespace std;
using namespace sf;

class Player
{
public:
	/*
	x - start X coordinate
	y - start Y coordinate
	dx - move on X
	*/
	Player(float x, float y, float dx);

	/*
	Update player's logic
	*/
	void update(float time);

	/*
	Draw player's rectangle
	*/
	void draw(RenderWindow* window);

	// Getters
	Vector2f getPosition();
	Vector2f getMove();
	Vector2f getSize();
private:
	Vector2f move;
	Vector2f position;
	Vector2f size;

	Sprite playerSprite;
	Texture playerTexture;
};