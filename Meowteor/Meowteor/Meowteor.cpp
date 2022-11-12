#include <SFML/Graphics.hpp>
#include "Player.h"
#include "Shield.h"
#include <SFML/Window.hpp>

int main() {
	sf::RenderWindow window(sf::VideoMode(1000, 1080), "game");
	sf::Vector2f mousePos;
	Player player;
	Shield shield(mousePos);
	sf::Clock clock;
	float time = 0;
	window.setMouseCursorVisible(false);


	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::Left)
			{
				player.stop();
			}
			if (event.type == sf::Event::KeyReleased && event.key.code == sf::Keyboard::Right)
			{
				player.stop();
			}

			if (event.type == sf::Event::MouseMoved)
			{
				mousePos = (sf::Vector2f)sf::Mouse::getPosition(window);
				

			}

		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
			player.moveL();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
			player.moveR();
		}
	

		if (clock.getElapsedTime().asMilliseconds() > 20)
		{

			player.update();
			shield.update(mousePos);
			clock.restart();
		}




		window.clear();
		window.draw(player.playerSprite);
		window.draw(shield.shieldSprite);
		window.display();
	}

	return 0;
}