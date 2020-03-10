#define OLC_PGE_APPLICATION
#include "olcPixelGameEngine.h"
#include "Scene.h"

int main()
{
	// Entry point for our game
	Scene retroGameScene;
	if (retroGameScene.Construct(256, 240, 4, 4))
	{
		retroGameScene.Start();
	}

	return 0;
}