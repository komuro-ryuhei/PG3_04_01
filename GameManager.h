#pragma once

#include <memory>
#include "IScene.h"
#include "TitleScene.h"
#include "GameScene.h"
#include "ClearScene.h"

class GameManager {

private:

	// シーンを保持するメンバ変数
	std::unique_ptr<IScene> sceneArr_[3];

	// どのシーンを呼び出すかを管理する変数
	int currentSceneNo_; // 現在のシーン
	int prevSceneNo_;    // 前のシーン

public:

	GameManager();  // コンストラクタ
	~GameManager(); // デストラクタ

	int Run();
};