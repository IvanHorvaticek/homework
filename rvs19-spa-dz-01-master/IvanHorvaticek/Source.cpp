#include <SFML/Graphics.hpp>
#include "Cvijet.h"
#include <vector>


int main()
{

	int height = 600;
	int width = 800;

	sf::RenderWindow window(sf::VideoMode(height, width), "Hello, SFML world!");
	window.setFramerateLimit(60);
	Cvijet cvijet(&window);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		


		window.clear();
		cvijet.draw();
		window.display();
	}

	return 0;
}