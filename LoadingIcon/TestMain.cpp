#include "src/Icon.h"

#ifdef _DEBUG 
	#include <chrono>
	#include <thread>
	#define SLEEP(x) std::this_thread::sleep_for(std::chrono::milliseconds(x));
#else
	#define SLEEP(x) 
#endif

int main() 
{
	Icon icon;
	std::cout << "  Loading..." << std::endl;

	for (int i = 0; i < 100; i++) 
	{
		icon.Turn();
		SLEEP(50)
	}

	return 0;
}