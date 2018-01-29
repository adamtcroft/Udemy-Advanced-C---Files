// StandardExceptions.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class canGoWrong
{
public:
	canGoWrong()
	{
		char *pMemory = new char[99999999999999999999999999];
		delete[] pMemory;
	}
};

int main()
{
	try
	{
		canGoWrong wrong;
	}
	catch (int e)
	{
	}
    return 0;
}

