#include "StageScene.h"

void Initilize/*初期化処理*/() {}

void StageScene::Update/*更新処理*/(char* keys, char* preKeys) {

	//スペースキーを押した瞬間
	if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == false) {
		//シーンをCLEARに変える
		sceneNo = CLEAR/*enum SceneのCLEAR*/;
	}
}

void StageScene/*描画処理*/() {
	Novice::ScreenPrintf(0, 0, "Stage Scene");
	Novice::ScreenPrintf(0, 30, "Push Space");
}







