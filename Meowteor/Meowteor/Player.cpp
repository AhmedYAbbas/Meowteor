#include "Player.h"

Player::Player() {
	player.setPosition(500, 800);
	player.setSize(sf::Vector2f(50.f, 70.f));
	if (!playerTex.loadFromFile("char.png"))
	{
		
	}
	playerSprite.setTexture(playerTex);
}

void Player::moveR() {
	if (player.getPosition().x < 900) {
		velocity += acceleration;
		if (velocity > maxV) velocity = maxV;
		player.move(sf::Vector2f(velocity,0));
	}

}

void Player::moveL() {
	if (player.getPosition().x > 20) {
		velocity -= acceleration;
		if (velocity < -maxV) velocity = -maxV;
		player.move(sf::Vector2f(velocity, 0));
	}
}

void Player::stop() {
	velocity = 0;
}

void Player::update() {
	playerSprite.setPosition(player.getPosition());
}
