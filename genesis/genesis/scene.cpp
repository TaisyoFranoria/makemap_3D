#include"scene.h"

scene::scene() {
	initialize();
}

scene::~scene() {
	finalize();
}

void scene::initialize() {
	time = 0;
	//���ƂŕύX
	x = 0;
	y = 0;
}

void scene::finalize() {

}

void scene::update() {

}

void scene::draw() {
	DrawFormatString(0,0,0xFFFFFF,"Running...");
	DrawFormatString(0, 16, 0xFFFFFF, "�I������ɂ�esc�L�[�������Ă�������");
}

void scene::update_late() {

}

float scene::get_time() { return time; }

int scene::get_xy(int num) {
	if (num == 0)return x;
	else         return y;
}