#pragma once
#include <chrono>
#include <iostream>


class Timer
{
public:
	Timer();
	~Timer();

	void begin();
	float end();


private:
	std::chrono::steady_clock::time_point _start;
	float _end = 0.0f;
	bool ended = true;
};