#include"tool.h"

tool::tool() {
	initialize();
}

tool::~tool() {
	finalize();
}

void tool::initialize() {
	alive = true;
	sc = new scene();
}

void tool::finalize() {
	delete sc;
}

void tool::update() {
	if (CheckHitKey(KEY_INPUT_ESCAPE))alive = false;
	sc->update();
}

void tool::draw() {
	sc->draw();
}

void tool::update_late() {
	sc->update_late();
}

void tool::all() {
	update();
	draw();
	update_late();
}