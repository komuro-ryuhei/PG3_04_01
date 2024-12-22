#pragma once

#include "Vector.h"

class Enemy {

public:
	void Init();

	void Update();

	void Draw();

	Vector2 GetPos();
	Vector2 GetRadius();

private:
	Vector2 pos_;
	Vector2 radius_;
	Vector2 speed_;
};