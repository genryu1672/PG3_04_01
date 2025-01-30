#include "StageScene.h"

void StageScene::Initialize() {}/*初期化処理*/

void StageScene::Update(char* keys, char* preKeys) {/*更新処理*/

	//スペースキーを押した瞬間
	if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == false) {
		//シーンをCLEARに変える
		sceneNo = Scene::CLEAR;/*enum SceneのCLEAR*/
	}
}

void StageScene::Draw() {/*描画処理*/
	Novice::ScreenPrintf(0, 0, "Stage Scene");
	Novice::ScreenPrintf(0, 30, "Push Space");
}







