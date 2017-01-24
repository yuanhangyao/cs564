//
// File: wl.h
// 
//  Description: Add stuff here ... 
//  Student Name: Add stuff here .. 
//  UW Campus ID: Add stuff here .. 
//  enamil: Add stuff here .. 
#include <iostream>
#include <fstream>
#include <string>
//#include <cstdlib>
void load(char filename[50])
{
	ifstream file_;
	filename = filename
	file_.open(filename); 
	if (file_.is_open())
	{
		cout << "File is now open." << endl;
		char word[50];
		file_ >> word;
		while (file_.good())
		{
			cout << word <<"  ";
			file_ >> word;
					}
		file_.close();
	}
	else cout << "File is not open." << endl;
}
