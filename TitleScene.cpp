#include "TitleScene.h"

#include "Novice.h"
#include "imgui/imgui.h"

void TitleScene::Init() {}

void TitleScene::Update(char keys[], char preKeys[]) {

	if (preKeys[DIK_SPACE] == 0 && keys[DIK_SPACE]) {
		sceneNo_ = STAGE;
	}
}

void TitleScene::Draw() { ImGui::Text("TITLE"); };