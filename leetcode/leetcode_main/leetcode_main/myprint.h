#pragma once
#include <iostream>

template <class T>
class myprint
{
public:
	myprint();
	~myprint();
	

	void printVector(const vector<T> & input)
	{
		for(vector<T>::iterator i = input.begin(); i != input.end(); i++)
		{
			std::cout << *i << std::endl;
		}
	}
};

