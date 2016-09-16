#include "EntityGrid.h"

bool EntityGrid::init()
{
	this->redEntity.loadFromFile("assets/entity-red.png");
	this->blueEntity.loadFromFile("assets/entity-blue.png");
	this->greenEntity.loadFromFile("assets/entity-green.png");
	this->purpleEntity.loadFromFile("assets/entity-purple.png");
	
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			Sprite sprite;

			this->entities[i][j] = Entity((float) i, (float) j, 80, 50);

			switch (j)
			{
			case 0:
				sprite.setTexture(redEntity);
				sprite.setPosition(i * 80, j * 40);

				this->entities[i][j].setSprite(sprite);

				break;
			case 1:
				sprite.setTexture(blueEntity);
				sprite.setPosition(i * 80, j * 40);

				this->entities[i][j].setSprite(sprite);
				
				break;
			case 2:
				sprite.setTexture(greenEntity);
				sprite.setPosition(i * 80, j * 40);

				this->entities[i][j].setSprite(sprite);
				
				break;
			case 3:
				sprite.setTexture(purpleEntity);
				sprite.setPosition(i * 80, j * 40);

				this->entities[i][j].setSprite(sprite);
				
				break;
			}
		}
	}

	return true;
}

void EntityGrid::draw(RenderWindow* window)
{
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			this->entities[i][j].draw(window);
		}
	}
}

void EntityGrid::update(Ball* ball)
{
	for (size_t i = 0; i < 10; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			//ball->intersect(entities[i][j].getSpriteRect());
		}
	}
}