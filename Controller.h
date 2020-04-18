
/*!
@file Controller.h
@brief Controller�N���X����`����Ă���w�b�_�t�@�C��
@date 2020/04/18/20:14
@author mimuro
*/

#pragma once
#include <DxLib.h>
#include <vector>
#include "Keyboard.h"
#include "Singleton.h"

/*!
@class Controller
@brief ���[�U����̓��͏��𑍊�����N���X�B
@date 2020/04/18/20:16
@author mimuro
*/
class Controller final:
	public Singleton<Controller>,
	private Keyboard
{
	Controller() = default;
	friend Singleton< Controller >;
	//! �E�����{�^�����͏��
	bool right = false;
	//! �������{�^�����͏��
	bool left = false;
	//! ������{�^�����͏��
	bool up = false;
	//! �������{�^�����͏��
	bool down = false;
	//! �X�^�[�g�{�^�����͏��
	bool start = false;
	//! �Z���N�g�{�^�����͏��
	bool select = false;
	//! �`�i�Z�j�{�^�����͏��
	bool push_A = false;
	//! �a�i�~�j�{�^�����͏��
	bool push_B = false;
	//! �w�i���j�{�^�����͏��
	bool push_X = false;
	//! �x�i���j�{�^�����͏��
	bool push_Y = false;

public:

	//! �S�Ă̓��͏�Ԃ��X�V����B
	void update();
	//! �E�����{�^�����͏�Ԃ̎擾
	const bool getRight() { return right; }		
	//! �������{�^�����͏�Ԃ̎擾
	const bool getLeft() { return left; }		
	//! ������{�^�����͏�Ԃ̎擾
	const bool getUp() { return up; }			
	//! �������{�^�����͏�Ԃ̎擾
	const bool getDown() { return down; }		
	//! �X�^�[�g�{�^�����͏�Ԃ̎擾
	const bool getStart() { return start; }		
	//! �Z���N�g�{�^�����͏�Ԃ̎擾
	const bool getSelect() { return select; }	
	//! �`�i�Z�j�{�^�����͏�Ԃ̎擾
	const bool getPush_A() { return push_A; }	
	//! �a�i�~�j�{�^�����͏�Ԃ̎擾
	const bool getPush_B() { return push_B; }	
	//! �w�i���j�{�^�����͏�Ԃ̎擾
	const bool getPush_X() { return push_X; }	
	//! �x�i���j�{�^�����͏�Ԃ̎擾
	const bool getPush_Y() { return push_Y; }	

};

