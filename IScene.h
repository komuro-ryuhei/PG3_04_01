#pragma once

enum SCENE { TITLE, STAGE, CLEAR };

class IScene {

protected:
	// シーン番号を管理する変数
	static int sceneNo_;

public:
	// 継承先で実装される関数
	// 抽象クラスなので純粋仮想関数とする
	virtual void Init() = 0;
	virtual void Update(char keys[], char preKeys[]) = 0;
	virtual void Draw() = 0;

	// 仮想デストラクタ
	virtual ~IScene();

	// シーン番号のゲッター、セッター
	int GetSceneNo();
	void SetSceneNo(int sceneNo);
};