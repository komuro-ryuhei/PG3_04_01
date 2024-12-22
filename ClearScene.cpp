#include "ClearScene.h"

#include "Novice.h"
#include "imgui/imgui.h"

void ClearScene::Init() {}

void ClearScene::Update(char keys[], char preKeys[]) {

	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo_ = TITLE;
	}
}

void ClearScene::Draw() { ImGui::Text("CLEAR"); };