#include "Meteor.h"

float Meteor::RandomX()
{
	return 480 + (rand() % 980);
}

float Meteor::RandomSpeed()
{
	return 70 + (rand() % 80);
}

Meteor::Meteor()
{

}

Meteor::Meteor(Texture *texture)
{ 
	if (!texture->loadFromFile("test.PNG"))
		cout << "Couldn't load texture." << endl;

	this->sprite.setTexture(*texture);
	this->speed = RandomSpeed();
	this->position.x = RandomX();
	this->position.y = 0.f;
	this->sprite.setPosition(position);
}

void Meteor::UpdatePosition(float dt)
{
	this->position.y += speed * dt;
	this->sprite.setPosition(position);
}

void Meteor::DrawMeteor(RenderWindow *window)
{
	window->draw(this->sprite);
}