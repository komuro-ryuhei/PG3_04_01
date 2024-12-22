#include "Player.h"

#include "Novice.h"

void Player::Init() {

	pos_ = {640.0, 360.0f};
	radius_ = {32.0f, 32.0f};
	speed_ = {10.0f, 10.0f};
}

void Player::Update(char keys[], char preKeys[]) {

	// 攻撃処理
	Attack(keys, preKeys);

	// 弾の更新処理
	for (auto it = bullets_.begin(); it != bullets_.end();) {
		it->Update();
		if (it->GetPos().y < 0) { // 弾が画面外に出たら削除
			it = bullets_.erase(it);
		} else {
			++it;
		}
	}

	// プレイヤーの移動処理
	if (keys[DIK_W]) {
		pos_.y -= speed_.y;
	}
	if (keys[DIK_S]) {
		pos_.y += speed_.y;
	}
	if (keys[DIK_A]) {
		pos_.x -= speed_.x;
	}
	if (keys[DIK_D]) {
		pos_.x += speed_.x;
	}
}

void Player::Draw() {

	// プレイヤーの描画
	Novice::DrawEllipse(static_cast<int>(pos_.x), static_cast<int>(pos_.y), static_cast<int>(radius_.x), static_cast<int>(radius_.y), 0.0f, 0xffffffff, kFillModeSolid);

	// 弾の描画
	for (auto& bullet : bullets_) {
		bullet.Draw();
	}
}

void Player::Attack(char keys[], char preKeys[]) {

	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {

		// 弾を生成し、初期化してリストに追加
		PlayerBullet newBullet;
		newBullet.Init(pos_);
		bullets_.push_back(newBullet);
	}
}

std::vector<PlayerBullet>& Player::GetBullets() { return bullets_; }