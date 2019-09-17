#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ifstream infile("input.txt");
	if (!infile.is_open())
	{
		cout << "File does not exist";
		return 0;
	}
	ofstream outfile;
	outfile.open("output.txt");
	string str;

	int parCounter = 0, bracCounter = 0;

	while (infile >> str)
	{

		if (bracCounter != 0)
		{
			if (str.find("]", 0) != string::npos)
				bracCounter--;
		}
		else if (parCounter != 0)
		{
			if (str.find(")", 0) != string::npos)
				parCounter--;
		}
		else
		{
			if (str.find("[", 0) != string::npos)
				bracCounter++;
			else if (str.find("(", 0) != string::npos)
				parCounter++;
			else
				outfile << str << " ";
		}
	}

	cout << "done";

	return 0;