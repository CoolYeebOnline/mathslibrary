#pragma once
#ifndef SCENE_H
#define SCENE_H

// Includes
#include "olcPixelGameEngine.h"

// Forward declarations
class Ship;

class Scene : public olc::PixelGameEngine
{
public:
	Scene();

	bool OnUserCreate() override;
	bool OnUserUpdate(float fElapsedTime) override;

private:
	Ship* playerShip;
};

#endif //!SCENE_H
