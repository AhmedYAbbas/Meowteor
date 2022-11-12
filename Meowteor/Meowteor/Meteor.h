#pragma once
#include <SFML/Graphics.hpp>
#include <vector>
#include <iostream>

using namespace sf;
using namespace std;

class Meteor
{
public:
	Sprite sprite;
	float speed;
	Vector2f position;
	Texture texture;

	Meteor(Texture *texture);
	Meteor();
	float RandomX();
	float RandomSpeed();
	void UpdatePosition(float dt);
	void DrawMeteor(RenderWindow *window);
};

