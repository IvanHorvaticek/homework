#pragma once
#include <vector>
#include  <SFML/Graphics.hpp>
#include <vector>

class Cvijet
{
private:
	sf::RenderWindow* window;
	float r;
public: 
	Cvijet(sf::RenderWindow* window);
	void draw();
};


