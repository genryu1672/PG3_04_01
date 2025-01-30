#include "TitleScene.h"

void TitleScene::Initialize() {}/*初期化処理*/

void TitleScene::Update(char* keys, char* preKeys) {/*更新処理*/

	//スペースキーを押した瞬間
	if (keys[DIK_SPACE] && preKeys[DIK_SPACE] == false) {
		//シーンをSTAGEに切り替える
		sceneNo =Scene::STAGE ;/*enum SceneのSTAGE*/
	}
}

void TitleScene::Draw() {/*描画処理*/
	Novice::ScreenPrintf(0, 0, "Title Scene");
	Novice::ScreenPrintf(0, 30, "Push Space");
}

