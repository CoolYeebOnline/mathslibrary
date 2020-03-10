// This file's header
#include "Ship.h"

// Includes
#include "Includes/Scene.h"

// Namespaces
using namespace olc;

Ship::Ship()
{
	// Load our sprite
	sprite = new Sprite("Resources/galaga.png");

	// Set the position vector
	position = { 100.0f, 100.0f };
}

void Ship::Update(Scene* pScene)
{
	// Handle input
	if (pScene->GetKey(Key::W).bHeld)
	{
		position.SetY(position.GetY() - 0.1f);
	}
	if (pScene->GetKey(Key::A).bHeld)
	{
		position.SetX(position.GetX() - 0.1f);
	}
	if (pScene->GetKey(Key::S).bHeld)
	{
		position.SetY(position.GetY() + 0.1f);
	}
	if (pScene->GetKey(Key::D).bHeld)
	{
		position.SetX(position.GetX() + 0.1f);
	}
}

void Ship::Draw(Scene* pScene)
{
	pScene->DrawSprite(position.GetX(), position.GetY(), sprite);
}