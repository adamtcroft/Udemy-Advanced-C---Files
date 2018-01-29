// ExceptionBasics.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

void mightGoWrong()
{
	bool error1 = false;
	bool error2 = true;

	if (error1)
	{
		throw "Something went wrong";
	}

	if (error2)
	{
		throw "Something else went wrong";
	}
}

void usesMightGoWrong()
{
	mightGoWrong();
}

int main()
{
	try
	{
		usesMightGoWrong();
	}
	catch (int e)
	{
		cout << "Error Code: " << e << endl;
	}
	catch (char const * e)
	{
		cout << "Error Message: " << e << endl;
	}
	catch (string &e)
	{
		cout << "String Error Message: " << e << endl;
	}

	cout << "Still Running..." << endl;

    return 0;
}

