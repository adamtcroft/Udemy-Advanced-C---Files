// Vectors.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<string> strings;

	strings.push_back("one");
	strings.push_back("two");
	strings.push_back("three");

	cout << "Iterator loop: " << endl;
	for (vector<string>::iterator it = strings.begin(); it != strings.end(); it++)
	{
		cout << *it << endl;
	}

    return 0;
}

