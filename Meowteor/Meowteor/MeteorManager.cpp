#include "MeteorManager.h"

void MeteorManager::Update(float dt)
{
	if (meteors.size() < meteorsCount)
	{
		for (int i = 1; i < meteorsCount - meteors.size(); i++)
		{
			meteors.push_back(Meteor(&meteor.texture));
		}
	}

	for (int i = 0; i < meteors.size(); i++)
	{
		meteors[i].UpdatePosition(dt);
		if (meteors[i].position.y > 1080)
		{
			//meteors.pop_back();
			meteors[i].position.y = 0;
			meteors[i].position.x = meteors[i].RandomX();
		}
	}
}

void MeteorManager::Draw(RenderWindow *window)
{
	for (int i = 0; i < meteors.size(); i++)
		meteors[i].DrawMeteor(window);
}
