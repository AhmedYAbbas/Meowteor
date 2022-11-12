#pragma once
#include "Meteor.h"
#include <iostream>
using namespace std;

class MeteorManager
{
public:
	Meteor meteor;
	static const int meteorsCount = 5;
	vector<Meteor> meteors;

	void Update(float dt);
	void Draw(RenderWindow *window);
};

