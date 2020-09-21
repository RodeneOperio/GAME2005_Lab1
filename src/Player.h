#pragma once
#ifndef __PLAYER__
#define __PLAYER__

#include "Sprite.h"
#include "Label.h"

class Player final : public Sprite
{
public:
	Player();
	~Player();

	// Life Cycle Methods
	virtual void draw() override;
	virtual void update() override;
	virtual void clean() override;

	void moveLeft(); // A to move left
	void moveRight(); // D to move right
	void moveUp(); // W to move up
	void moveDown(); // S to move down
	void stopMoving(); // Player stops when no keys pressed

	float checkDistance(GameObject* pGameObject); // Distance Float Value
	bool checkCollision(GameObject* pGameObject); // True/False Collision

private:
	const float SPEED = 50.0f;
};

#endif /* defined (__PLAYER__) */