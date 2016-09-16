#include "Ball.h"

Ball::Ball()
{
	cout << "Ball was created by default constructor!" << endl;
}

Ball::Ball(float x, float y, float radius, float dx, float dy)
{
	this->position = Vector2f(x, y);
	this->move = Vector2f(dx, dy);

	this->radius = radius;

	this->circle.setRadius(this->radius);
	this->circle.setPosition(this->position);

	this->rect.height = radius * 2;
	this->rect.width = radius * 2;
	this->rect.left = x;
	this->rect.top = y;

	cout << "Ball initialized" << endl;
}

void Ball::draw(RenderWindow* window)
{
	window->draw(this->circle);
}

void Ball::update(float time)
{
	float x = this->move.x * time;
	float y = this->move.y * time;

	this->position.x += x;
	this->position.y += y;
}

void Ball::reflect()
{
	this->move.x *= -1;
	this->move.y *= -1;

	cout << "Ball was reflected" << endl;
}

bool Ball::intersect(IntRect rect)
{
	cout << rect.height << endl;
	cout << rect.width << endl;
	cout << rect.left << endl;
	cout << rect.top << endl;

	return true;
}

Ball::~Ball() {}