#pragma once

#include "IScene.h"

#include "Enemy.h"
#include "Player.h"

#include <memory>

class GameScene : public IScene {

public:
	void Init() override;
	void Update(char keys[], char preKeys[]) override;
	void Draw() override;

private:
	bool CheckCollision(PlayerBullet& bullet, Enemy& enemy);

private:
	std::unique_ptr<Player> player_ = nullptr;
	std::unique_ptr<Enemy> enemy_ = nullptr;
};