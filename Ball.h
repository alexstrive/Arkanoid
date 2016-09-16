#pragma once
#include <iostream>

#include <SFML/Graphics.hpp>

using namespace std;
using namespace sf;

class Ball
{
public:
	Ball();
	Ball(float x, float y, float radius, float dx, float dy);
	~Ball();

	void draw(RenderWindow* window);

	void update(float time);

	bool intersect(IntRect rect);

	void reflect();
private:
	// radius of the circle
	float radius;

	// x - x in global x 
	// y - y in global y
	Vector2f position;
	
	// x - dymanic x 
	// y - dynamic y
	Vector2f move;

	IntRect rect;

	CircleShape circle;
};

