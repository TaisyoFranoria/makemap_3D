#pragma once
#include<Dxlib.h>
#include<iostream>

class scene {
public:
	scene();
	~scene();
	void initialize();
	void finalize();

	void update();
	void draw();
	void update_late();

	float get_time();
	int get_xy(int num);
private:
	float time;
	int x, y;
};
