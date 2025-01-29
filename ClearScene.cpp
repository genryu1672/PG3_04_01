#include "ClearScene.h"

void Initilize/*初期化処理*/() {}

void ClearScene::Update/*更新処理*/(char* keys, char* preKeys) {
	//スペースキーを押した瞬間
	if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == false) {
		//シーンをTITLEに切り替える
		sceneNo = TITLE/*enum SceneのTITLE*/;
	}
}

void Clear/*描画処理*/() {
	Novice::ScreenPrintf(0, 0, "Clear Scene");
	Novice::ScreenPrintf(0, 30, "Push Space");
}