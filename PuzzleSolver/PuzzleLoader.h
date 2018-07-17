#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <iostream>

class PuzzleLoader
{
public:
	PuzzleLoader(const std::string& filename);
	virtual ~PuzzleLoader();


	//temporary function for testing purposes
	virtual void test() = 0;
	virtual const bool isFileCorrectFormat() = 0;
	const bool isLoaded()const {return _loaded;}

private:
	void readLines();
	std::ifstream _ifs;
	bool _loaded = false;

protected:
	std::vector<std::string> _lines;	
};

