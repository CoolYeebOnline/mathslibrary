// Includes
#include "Scene.h"
#include "Ship.h"
#include "Vector3D.h"

Scene::Scene()
{
	sAppName = "Example";
}

// Called once at the start, so create things here
bool Scene::OnUserCreate()
{
	// Create a new instance of the ship
	playerShip = new Ship();

	return true;
}

// Called once per frame
bool Scene::OnUserUpdate(float fElapsedTime)
{
	// UPDATE
	/////////////////////////////

	// Should we quit?
	if (GetKey(olc::Key::ESCAPE).bPressed)
	{
		return false;
	}

	// Update our player ship
	playerShip->Update(this);
	
	// DRAW
	/////////////////////////////

	// Clear the previous frame
	Clear(olc::Pixel());

	// Enables alpha blending
	SetPixelMode(olc::Pixel::ALPHA);

	// Draw our player ship
	playerShip->Draw(this);

	return true;
}