#include "Icon.h"

Icon::Icon() 
{
	Output = GetStdHandle(STD_OUTPUT_HANDLE);
	StartPos = Icon::GetPosCurs();
}

Icon::~Icon() {}

void Icon::Turn()
{
	COORD CurrentPos = GetPosCurs();
	SetConsoleCursorPosition(Output, StartPos);
	std::cout << Frames[FramePtr];
	FramePtr++;
	FramePtr %= 4;
	SetConsoleCursorPosition(Output, CurrentPos);
}

COORD Icon::GetPosCurs()
{
	GetConsoleScreenBufferInfo(Output, &Cbsi);
	return Cbsi.dwCursorPosition;
}