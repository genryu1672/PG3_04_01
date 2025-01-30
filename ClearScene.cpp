#include "ClearScene.h"

void ClearScene::Initialize() {}/*初期化処理*/

void ClearScene::Update(char* keys, char* preKeys) {/*更新処理*/
	//スペースキーを押した瞬間
	if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == false) {
		//シーンをTITLEに切り替える
		sceneNo = Scene::TITLE;/*enum SceneのTITLE*/
	}
}

void ClearScene::Draw() {/*描画処理*/
	Novice::ScreenPrintf(0, 0, "Clear Scene");
	Novice::ScreenPrintf(0, 30, "Push Space");
}