#include "Timer.h"

Timer::Timer()
{

}

Timer::~Timer()
{

}

void Timer::begin()
{
	if (ended)
	{
		_start = std::chrono::steady_clock::now();
	}
	else
	{
		std::cout << "Tried to start timer while it was still running" << std::endl;
	}
}

float Timer::end()
{
	const std::chrono::duration<float> elapsed = std::chrono::steady_clock::now() - _start;
	return elapsed.count();
}