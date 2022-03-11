#pragma once

#include <iostream>
#include <Windows.h>

class Icon
{
private:
	HANDLE Output;
	CONSOLE_SCREEN_BUFFER_INFO Cbsi;
	COORD StartPos;

	char Frames[4] = { '|', '/', '-', '\\' };
	short FramePtr = 0;
public:
	Icon();
	~Icon();

	void Turn();
	COORD GetPosCurs();
};

