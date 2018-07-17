#include "PuzzleLoader.h"

PuzzleLoader::PuzzleLoader(const std::string& filename)
	:
	_ifs(filename)
{
	if (!_ifs)
	{
		std::cout<< "File does not exist" << std::endl;
	}
	else
	{
		_loaded = true;
		readLines();
	}
}


PuzzleLoader::~PuzzleLoader()
{
}

void PuzzleLoader::readLines()
{
	std::string s;
	while (std::getline(_ifs, s))
	{
		_lines.push_back(s);
	}
}