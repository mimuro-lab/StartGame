#pragma once

/*!
@file Define.h
@brief ���낢��Ȓ�`���܂Ƃ܂�ׂ̃w�b�_�t�@�C��
@date 2020/04/15/0:19
@author mimuro
*/

/*!
@enum eScene
@brief �V�[���̒�`�A�N���X���Ɣ��Ȃ��悤�ɃV�[���̓���'e'��t����悤�ɂ���B
@date 2020/04/15/16:47
@author mimuro
*/
enum eScene {
	eNone,
	eStartScene,
	eMenuScene,
	eConfigScene,
	eGameScene,
};

/*!
@class Define
@brief ������p�����[�^�̒�`��ێ�����N���X
@date 2020/04/15/0:19
@author mimuro
*/
class Define final {
public:
	//!�E�B���h�E�T�C�Y��
	const static int WIN_W;

	//!�E�B���h�E�T�C�Y�c
	const static int WIN_H;
	
	//!�~����
	const static float PI;	
};