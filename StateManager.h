#pragma once

#include <iostream>

#include <SFML/Graphics.hpp>

#include "Player.h"
#include "EntityGrid.h"
#include "Ball.h"

using namespace std;
using namespace sf;

class StateManager
{
public:
	enum State
	{
		Menu,
		Play,
		Pause
	};

	StateManager(State startState, RenderWindow* window);

	void update(float time);

	void setState(State activeState);
private:
	// Pointer to main window, there we can draw
	RenderWindow* window;

	EntityGrid* grid;

	Player* player;

	Ball* ball;

	State activeState;

	void menu(float time);
	void play(float time);
	void pause(float time);
};