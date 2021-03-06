// ParsingTextinFiles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <sstream>
#include <iostream>

using namespace std;

int main()
{
	string filename = "stats.txt";
	ifstream input;

	input.open(filename);

	if (!input.is_open())
	{
		return 1;
	}

	while (input)
	{
		string line;

		getline(input, line, ':');

		int population;
		input >> population;

		input >> ws;

		if (!input)
		{
			break;
		}

		cout << "'" << line << "'" << " -- '" << population << "'" << endl;
	}

	input.close();

    return 0;
}

