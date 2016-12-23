#include "myprintf.h"


myprintf::myprintf()
{
}


myprintf::~myprintf()
{
}


void myprintf::printfVector(std::vector<int> & input)
{
	for (std::vector<int>::iterator iter = input.begin(); iter != input.end(); iter++)
	{
		std::cout << *iter << std::endl;
	}
}
