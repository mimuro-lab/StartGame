
/*!
@file GameScene.cpp
@brief GameScene�N���X���̃����o�ނ̒�`���s��CPP�t�@�C���B
@date 2020/04/16/19:58
@author mimuro
*/

#include "GameScene.h"

void GameScene::update()
{
	counterUpdate();
	ValidSelectWindow();
	SelectScene();
}

void GameScene::draw()
{
	DrawFormatString(10, 50, GetColor(255, 255, 255), "Game");
}

void GameScene::SelectScene()
{

}