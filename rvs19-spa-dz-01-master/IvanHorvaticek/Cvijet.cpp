
#include  <SFML/Graphics.hpp>
#include <string>
#include "Cvijet.h"
#include <chrono>
#include <ctime>
using namespace std;

Cvijet::Cvijet(sf::RenderWindow* window)
{
	this->window = window;
	float r = 50;
}

void Cvijet::draw()
{
	if (r > 100) {
		window->clear(sf::Color::Magenta);

	}
	if (r< 400) {
		r++;
	}


	sf::CircleShape circle(100);
	circle.setFillColor(sf::Color::Yellow);
	circle.setPosition(sf::Vector2f(window->getSize().x / 2 - circle.getRadius(), window->getSize().y / 2 - circle.getRadius()));
	circle.setOutlineColor(sf::Color::Red);
	circle.setOutlineThickness(45);
	window->draw(circle);


	sf::CircleShape sun(40);
	sun.setFillColor(sf::Color::Yellow);
	sun.setPosition(20, 20);
	window->draw(sun);
	
	sf::RectangleShape stem(sf::Vector2f(70, 200));
	stem.setFillColor(sf::Color::Green);
	stem.setPosition(260, 545);
	window->draw(stem);



	sf::RectangleShape grass(sf::Vector2f(600, 300));
	grass.setFillColor(sf::Color::Green);
	grass.setPosition(0, 700);
	window->draw(grass);







}
