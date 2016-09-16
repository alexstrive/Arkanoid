#include <iostream>

#include <SFML/Graphics.hpp>

#include "Settings.h"
#include "StateManager.h"

using namespace std;
using namespace sf;

// Flags

// Game is in active state
bool isPlaying = false;
// Window is in active state
bool isRunning = true;
// Vertical Synchronization is active
bool isVSyncEnabled = true;

int main()
{
	Clock clock;
	float time;

	// Main window
	RenderWindow window(VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Arkanoid");

	StateManager stateManager(StateManager::Menu, &window);

	window.setVerticalSyncEnabled(isVSyncEnabled);

	// Game loop
	while (isRunning)
	{
		time = clock.restart().asSeconds();

		/*
		Handle events
		*/
		Event event;
		while (window.pollEvent(event))
		{
			if (event.KeyPressed)
			{
				switch (event.key.code)
				{
				case Keyboard::Escape:
					isRunning = false;
				}
			}

			if (event.type == Event::Closed)
			{
				isRunning = false;
			}
		}

		window.clear();

		stateManager.update(time);

		window.display();
	}

	window.close();

	return EXIT_SUCCESS;
}