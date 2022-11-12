#pragma once
#include <SFML/Graphics.hpp>

class Shield {
public:
	sf::RectangleShape shield;
	sf::Texture shieldTex;
	sf::Sprite shieldSprite;

	Shield(sf::Vector2f mousePos);

	//void moveR();
	//void moveL();
	//void stop();
	void update(sf::Vector2f mousePos);
	void collision();
};
#pragma once
