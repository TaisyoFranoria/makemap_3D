#include<Dxlib.h>
#include<iostream>
#include"tool.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {

	SetMainWindowText("tool");
	SetGraphMode(640, 480, 32);
	ChangeWindowMode(TRUE);
	if (DxLib_Init() == -1)return -1;
	SetDrawScreen(DX_SCREEN_BACK);

	tool* TOOL = new tool();

	while (ProcessMessage() != -1 && !ScreenFlip() && !ClearDrawScreen()) {
		TOOL->all();
		if (!TOOL->alive)break;
	}

	delete TOOL;

	DxLib_End();
	return 0;
}