#pragma once
#include <SFML/Graphics.hpp>
#include "Shield.h"


	Shield::Shield(sf::Vector2f mousePos) {
		if (!shieldTex.loadFromFile("char.png"))
		{

		}
		shieldSprite.setTexture(shieldTex);
		shield.setSize(sf::Vector2f(200, 30));
		shield.setPosition(mousePos);
		shield.setOrigin(mousePos);
	}


	void Shield::update(sf::Vector2f mousePos) {
		shieldSprite.setPosition(mousePos);
	}
