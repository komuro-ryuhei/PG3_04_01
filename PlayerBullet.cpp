#include "PlayerBullet.h"

#include "Novice.h"

void PlayerBullet::Init(Vector2 pos) {

	//
	pos_ = pos;
	radius_ = {10.0f, 10.0f};
	speed_ = {20.0f, 20.0f};
}

void PlayerBullet::Update() {

	//
	pos_.y -= speed_.y;
}

void PlayerBullet::Draw() {

	//
	Novice::DrawEllipse(static_cast<int>(pos_.x), static_cast<int>(pos_.y), static_cast<int>(radius_.x), static_cast<int>(radius_.y), 0.0f, 0xff0000ff, kFillModeSolid);
}

Vector2 PlayerBullet::GetPos() { return pos_; }

Vector2 PlayerBullet::GetRadius() { return radius_; }