#include "StateManager.h"

#include "Settings.h"

StateManager::StateManager(State startState = Menu, RenderWindow* window = nullptr)
{
	this->activeState = startState;
	this->window = window;

	this->grid = new EntityGrid();
	this->grid->init();
	
	player = new Player(WINDOW_WIDTH / 2, WINDOW_HEIGHT - 50, 30);

	ball = new Ball(WINDOW_WIDTH / 2, WINDOW_HEIGHT - 500, 5, 0, 0);

	cout << "Start State is " << this->activeState << endl;
}

void StateManager::setState(State activeState)
{
	this->activeState = activeState;
		
	cout << "New state is " << this->activeState << endl;
}

void StateManager::update(float time)
{
	switch (this->activeState)
	{
	case Menu:
		menu(time);
		break;
	case Play:
		play(time);
		break;
	case Pause:
		pause(time);
		break;
	default:
		setState(Menu);
		break;
	}
}

void StateManager::play(float time) {}

void StateManager::menu(float time)
{
	this->player->update(time);
	this->grid->update(this->ball);

	this->player->draw(this->window);
	this->grid->draw(this->window);
	this->ball->draw(this->window);
}

void StateManager::pause(float time) {}