#include "Enemy.h"

#include "Novice.h"

void Enemy::Init() {

	pos_ = {640.0f, 100.0f};
	radius_ = {32.0f, 32.0f};
	speed_ = {10.0f, 10.0f};
}

void Enemy::Update() {}

void Enemy::Draw() {

	//
	Novice::DrawEllipse(static_cast<int>(pos_.x), static_cast<int>(pos_.y), static_cast<int>(radius_.x), static_cast<int>(radius_.y), 0.0f, 0xffffffff, kFillModeSolid);
}

Vector2 Enemy::GetPos() { return pos_; }

Vector2 Enemy::GetRadius() { return radius_; }