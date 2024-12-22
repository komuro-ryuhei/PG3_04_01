#include "IScene.h"

// タイトルシーンで初期化
int IScene::sceneNo_ = TITLE;

// 仮想デストラクタの定義
IScene::~IScene() {}

// シーン番号のゲッター、セッター
int IScene::GetSceneNo() { return sceneNo_; }
void IScene::SetSceneNo(int sceneNo) { sceneNo_ = sceneNo; }