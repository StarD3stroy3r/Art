// Art.cpp : Defines the entry point for the console application.
// This is an application used for simple music creation and recording of musical notes.
// Note* This is a loose representation of notes on a piano
//*Must have a artIn text file with build of the code for functionality 

#include "stdafx.h"
#include <fstream>
#include <cstdlib>
#include <Windows.h>
#include <string>
#include <iostream>

using namespace std; // Used for naming variables 
using std::ifstream; // Used for inporting and reading a file
using std::ofstream; // Used for exporting a file

typedef char* IntPtr;


int main()
{
	ifstream inStream;
	ofstream outStream;
	
	inStream.open("artIn.txt"); // Reads the text file named artIn
	if (inStream.fail()) // if the command fails, display this message and end the code
	{
		cout << "Input file opening failed.\n";
		system("PAUSE");
		exit(1);
	}

	outStream.open("artOut.txt"); // outputs the a text file named artOut
	if (outStream.fail())
	{
		cout << "Output file opening failed. \n";
		system("PAUSE");
		exit(1);
	}
	int noteLength = 300;
	
	int nSize;
	cout << "How many notes would you like to enter :: \n";
	cin >> nSize;
	IntPtr n;
	n = new char[nSize];


	int noteNum = 0;
	
	do // Plays beeps at different frequencies according to an associated letter
	{

		if (GetAsyncKeyState(0x41)) // A
		{
			Beep(200, noteLength);
			n[noteNum] = 'A';
			noteNum++;
		}
		if (GetAsyncKeyState(0x57)) // W
		{
			Beep(250, noteLength);
			n[noteNum] = 'W';
			noteNum++;
		}
		if (GetAsyncKeyState(0x53)) // S
		{
			Beep(300, noteLength);
			n[noteNum] = 'S';
			noteNum++;
		}
		if (GetAsyncKeyState(0x45)) // E
		{
			Beep(350, noteLength);
			n[noteNum] = 'E';
			noteNum++;
		}
		if (GetAsyncKeyState(0x44)) // D
		{
			Beep(400, noteLength);
			n[noteNum] = 'D';
			noteNum++;
		}
		if (GetAsyncKeyState(0x52)) // R
		{
			Beep(450, noteLength);
			n[noteNum] = 'R';
			noteNum++;
		}
		if (GetAsyncKeyState(0x46)) // F
		{
			Beep(500, noteLength);
			n[noteNum] = 'F';
			noteNum++;
		}
		if (GetAsyncKeyState(0x54)) // T
		{
			Beep(550, noteLength);
			n[noteNum] = 'T';
			noteNum++;
		}
		if (GetAsyncKeyState(0x47)) // G
		{
			Beep(600, noteLength);
			n[noteNum] = 'G';
			noteNum++;
		}
		if (GetAsyncKeyState(0x59)) // Y
		{
			Beep(650, noteLength);
			n[noteNum] = 'Y';
			noteNum++;
		}
		if (GetAsyncKeyState(0x48)) // H
		{
			Beep(700, noteLength);
			n[noteNum] = 'H';
			noteNum++;
		}
		if (GetAsyncKeyState(0x55)) // U
		{
			Beep(750, noteLength);
			n[noteNum] = 'U';
			noteNum++;
		}
		if (GetAsyncKeyState(0x4A)) // J
		{
			Beep(800, noteLength);
			n[noteNum] = 'J';
			noteNum++;
		}
		if (GetAsyncKeyState(0x49)) // I
		{
			Beep(850, noteLength);
			n[noteNum] = 'I';
			noteNum++;
		}
		if (GetAsyncKeyState(0x4B)) // K
		{
			Beep(900, noteLength);
			n[noteNum] = 'K';
			noteNum++;
		}
		if (GetAsyncKeyState(0x4F)) // O
		{
			Beep(950, noteLength);
			n[noteNum] = 'O';
			noteNum++;
		}
		if (GetAsyncKeyState(0x4C)) // L
		{
			Beep(1000, noteLength);
			n[noteNum] = 'L';
			noteNum++;
		}
		if (GetAsyncKeyState(0x50)) // P
		{
			Beep(1050, noteLength);
			n[noteNum] = 'P';
			noteNum++;
		}
		if (GetAsyncKeyState(VK_OEM_1)) // ;
		{
			Beep(1100, noteLength);
			n[noteNum] = ';';
			noteNum++;
		}
	} 
	
	while (noteNum < nSize); // while the number of notes played is smaller than the designated total note size
	//Prompted to either save or not save with these selcetion of notes
	int ans;
	cout << "Would you like to save these notes? (1 for yes, 2 for no)\n";
	cin >> ans;
	// if answered with 1, convert the notes played into the artOut text file
	if (ans == 1)
	{
		inStream >> n[noteNum];
		outStream << n[noteNum];
		outStream.close();
	}
	//if answered with 2, close both streams and end the code
	if (ans == 2)
	{
		inStream.close();
		outStream.close();
		system("PAUSE");
		return 0;
	}
	//Otherwise, close both streams and end the code
	else
	{
		inStream.close();
		outStream.close();
		system("PAUSE");
		return 0;
	}

}


