#pragma once
#include <iostream>

#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

class Entity
{
public:
	/*
	gridX - position of X in grid
	gridY - position of Y in grid
	width - width of entity
	height - height of entity
	*/
	Entity(float gridX, float gridY, float width, float height);
	Entity();

	void draw(RenderWindow* window);

	void update(float time);

	// Setters
	void setPosition(Vector2f position);
	void setSize(Vector2f size);
	void setSprite(Sprite sprite);

	// Getters
	Vector2f getPosition();
	Vector2f getSize();
	IntRect  getSpriteRect();
private:
	Vector2f position;
	Vector2f size;
	Vector2f origin;

	Sprite sprite;

	bool isLive = true;
};
