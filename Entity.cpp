#include "Entity.h"

Entity::Entity(float gridX, float gridY, float width, float height)
{
	this->position.x = gridX * width;
	this->position.y = gridY * height;

	this->size.x = width;
	this->size.y = height;

	this->origin.x = this->position.x / 2;
	this->origin.y = this->position.y / 2;
}

Entity::Entity() {}

void Entity::draw(RenderWindow* window)
{
	if (isLive)
	{
		window->draw(this->sprite);
	}
}

void Entity::update(float time)
{
	// TODO: fill it
}

void Entity::setPosition(Vector2f position)
{
	this->position = position;
}

void Entity::setSize(Vector2f size)
{
	this->size = size;
}

void Entity::setSprite(Sprite sprite)
{
	this->sprite = sprite;
}

Vector2f Entity::getPosition()
{
	return this->position;
}

Vector2f Entity::getSize()
{
	return this->size;
}

IntRect Entity::getSpriteRect()
{
	return this->sprite.getTextureRect();
}