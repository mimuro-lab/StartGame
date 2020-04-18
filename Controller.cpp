
/*!
@file Controller.cpp
@brief Controller�N���X�̃����o�ނ̒�`���s��CPP�t�@�C��
@date 2020/04/18/20:33
@author mimuro
*/

#include "Controller.h"

/*!
@brief �e���͏�Ԃ��X�V����B������Ă���Ƃ��̂�true�A�b������false�B��ԕێ��Ȃǂ͂��̃N���X�ł͂��Ȃ��B
@date 2020/04/18/20:31
@author mimuro
*/
void Controller::update()
{
	Keyboard::update();
	
	// Sart�{�^���̍X�V
	if (Keyboard::getPressingCount(KEY_INPUT_H) == 1) {
		start = true;
	}
	else {
		start = false;
	}
	
	// Select�{�^���̍X�V
	if (Keyboard::getPressingCount(KEY_INPUT_G) == 1) {
		select = true;
	}
	else {
		select = false;
	}
	
	// Up�{�^���̍X�V
	if (Keyboard::getPressingCount(KEY_INPUT_E) == 1) {
		up = true;
	}
	else {
		up = false;
	}

	// Down�{�^���̍X�V
	if (Keyboard::getPressingCount(KEY_INPUT_D) == 1) {
		down = true;
	}
	else {
		down = false;
	}

	// Right�{�^���̍X�V
	if (Keyboard::getPressingCount(KEY_INPUT_F) == 1) {
		right = true;
	}
	else {
		right = false;
	}

	// Left�{�^���̍X�V
	if (Keyboard::getPressingCount(KEY_INPUT_S) == 1) {
		left = true;
	}
	else {
		left = false;
	}

	// A�{�^���̍X�V
	if (Keyboard::getPressingCount(KEY_INPUT_L) == 1) {
		push_A = true;
	}
	else {
		push_A = false;
	}

	// B�{�^���̍X�V
	if (Keyboard::getPressingCount(KEY_INPUT_K) == 1) {
		push_B = true;
	}
	else {
		push_B = false;
	}

	// X�{�^���̍X�V
	if (Keyboard::getPressingCount(KEY_INPUT_I) == 1) {
		push_X = true;
	}
	else {
		push_X = false;
	}

	// Y�{�^���̍X�V
	if (Keyboard::getPressingCount(KEY_INPUT_J) == 1) {
		push_Y = true;
	}
	else {
		push_Y = false;
	}

}