#pragma once

#include "PlayerBullet.h"
#include "Vector.h"
#include <vector> // vectorの追加

class Player {

public:
	void Init();
	void Update(char keys[], char preKeys[]);
	void Draw();

	std::vector<PlayerBullet>& GetBullets();

private:
	void Attack(char keys[], char preKeys[]);

private:
	Vector2 pos_;
	Vector2 radius_;
	Vector2 speed_;

	std::vector<PlayerBullet> bullets_; // 複数の弾を管理するリスト
};
