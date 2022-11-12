#include <SFML/Graphics.hpp>
#include "Meteor.h"
#include "MeteorManager.h"
#include <vector>
using namespace std;

int main() {
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "game", sf::Style::Fullscreen);
	sf::CircleShape shape(20.0f);
	shape.setFillColor(sf::Color::Yellow);

	srand(sin(time(nullptr)) * 1000);

	MeteorManager meteors;

	Clock clock;
	float dt = 0.02;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		window.clear();

		if (clock.getElapsedTime().asMilliseconds() >= 0.016)
		{
			meteors.Update(dt);
			clock.restart();
		}

		meteors.Draw(&window);
		window.display();
	}

	return 0;
}