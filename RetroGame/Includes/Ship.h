#ifndef SHIP_H
#define SHIP_H

// Includes
#include "olcPixelGameEngine.h"
#include "Vector2D.h"

// Forward declarations
class Scene;

class Ship
{
public:
	// Constructor / Destructor
	Ship();
	~Ship() {}

	// Functions
	void Update(Scene* pScene);
	void Draw(Scene* pScene);

	// Getters / Setters
	olc::Sprite* GetSprite() { return sprite; }
	Vector2D& GetPosition() { return position; }
	void SetSprite(olc::Sprite* a_sprite) { sprite = a_sprite; }
	void SetPosition(Vector2D a_position) { position = a_position; }

private:
	// Variables
	olc::Sprite* sprite;
	Vector2D position;
};

#endif //!SHIP_H
