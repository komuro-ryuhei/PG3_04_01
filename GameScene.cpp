#include "GameScene.h"
#include "Novice.h"
#include "imgui/imgui.h"

#include <cmath>

void GameScene::Init() {

	// 自機と敵の生成と初期化
	player_ = std::make_unique<Player>();
	player_->Init();

	enemy_ = std::make_unique<Enemy>();
	enemy_->Init();
}

void GameScene::Update(char keys[], char preKeys[]) {

	player_->Update(keys, preKeys);

	enemy_->Update();

	// プレイヤーの弾と敵の衝突判定
	for (auto& bullet : player_->GetBullets()) {
		if (CheckCollision(bullet, *enemy_)) {
			sceneNo_ = CLEAR;
		}
	}
}

void GameScene::Draw() {

	ImGui::Text("GAME");

	ImGui::Separator();

	ImGui::Text("SPACE to Shot");

	player_->Draw();
	enemy_->Draw();
};

bool GameScene::CheckCollision(PlayerBullet& bullet, Enemy& enemy) {
	Vector2 bulletPos = bullet.GetPos();
	Vector2 enemyPos = enemy.GetPos();

	float distance = static_cast<float>(std::sqrt(std::pow(bulletPos.x - enemyPos.x, 2) + std::pow(bulletPos.y - enemyPos.y, 2)));
	float combinedRadius = bullet.GetRadius().x + enemy.GetRadius().x;

	return distance < combinedRadius;
}