// ReadingandWritingBinaryFiles.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

struct Data
{
	char name[100];
	int age;
	double height;
};

int main()
{
	// WRITE FILE
	string filename = "data.adam";

	Data data = { "Adam", 32, 5.11 };

	ofstream outFile;

	outFile.open(filename, ios::binary);

	if (!outFile.is_open())
	{
		cout << "Could not create " << filename << endl;
	}

	outFile.write(reinterpret_cast<char *>(&data), sizeof(data));

	if (!outFile)
	{
		cout << "Could not write data to file " << filename << endl;
	}

	outFile.close();

	// READ FILE
	ifstream inFile;
	Data inputData;

	inFile.open(filename, ios::binary);

	if (!inFile.is_open())
	{
		cout << "Could not create " << filename << endl;
	}

	inFile.read(reinterpret_cast<char *>(&inputData), sizeof(data));

	if (!inFile)
	{
		cout << "Could not write data to file " << filename << endl;
	}

	inFile.close();

	cout << inputData.name << ", " << inputData.age << ", " << inputData.height << endl;

    return 0;
}

