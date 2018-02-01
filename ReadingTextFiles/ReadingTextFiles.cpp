// ReadingTextFiles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;


int main()
{
	string inFilename = "text.txt";

	ifstream inFile;

	inFile.open(inFilename);

	if (inFile.is_open())
	{
		string line;

		while (!inFile.eof())
		{
			getline(inFile, line);
			cout << line << endl;
		}

		inFile.close();
	}
	else
	{
		cout << "Cannot open file: " << inFilename << endl;
	}

    return 0;
}

