#pragma once
#include <SFML/Graphics.hpp>

class Player {
public: 
	sf::RectangleShape player;
	float velocity = 0;
	float acceleration = 0.005f;
	float maxV = 1;
	sf::Texture playerTex;
	sf::Sprite playerSprite;
	Player();

	void moveR();
	void moveL();
	void stop();
	void update();
	void collision();
};
