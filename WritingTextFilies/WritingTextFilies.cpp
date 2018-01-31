// WritingTextFilies.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main()
{
	ofstream outFile;

	string outputFilename = "text.txt";

	outFile.open(outputFilename);

	if (outFile.is_open())
	{
		outFile << "Hello, World!";
		outFile.close();
	}
	else
	{
		cout << "Could not create file: " << outputFilename << endl;
	}

    return 0;
}

