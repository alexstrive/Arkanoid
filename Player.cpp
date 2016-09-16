#include "Player.h"

Player::Player(float x, float y, float dx)
{
	this->position.x = x;
	this->position.y = y;

	this->move.x = dx;
	this->move.y = 0;

	playerTexture.loadFromFile("assets/player.png");
	
	this->size.x = playerTexture.getSize().x;
	this->size.y = playerTexture.getSize().y;

	playerSprite.setTexture(playerTexture);
	playerSprite.setOrigin(this->size.x / 2, this->size.y / 2);
	playerSprite.setPosition(this->position);

	cout << "Player initialized" << endl;
}

void Player::update(float time)
{
	cout << time << endl;

	if ((Keyboard::isKeyPressed(Keyboard::D))
		&& (this->position.x < WINDOW_WIDTH - this->size.x / 2))
	{
		this->position.x += move.x;
		this->playerSprite.move(this->move.x, this->move.y);
	}

	if ((Keyboard::isKeyPressed(Keyboard::A))
		&& (this->position.x > this->size.x / 2))
	{
		this->position.x += move.x * -1;
		this->playerSprite.move(this->move.x * -1, this->move.y);
	}
}

void Player::draw(RenderWindow* window)
{
	window->draw(this->playerSprite);
}

Vector2f Player::getPosition()
{
	return this->position;
}

Vector2f Player::getMove()
{
	return this->move;
}

Vector2f Player::getSize()
{
	return this->size;
}

