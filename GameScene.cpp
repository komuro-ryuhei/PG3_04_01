#include "GameScene.h"

#include "Novice.h"
#include "imgui/imgui.h"

void GameScene::Init() {}

void GameScene::Update(char keys[], char preKeys[]) {

	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo_ = CLEAR;
	}
}

void GameScene::Draw() { ImGui::Text("GAME"); };