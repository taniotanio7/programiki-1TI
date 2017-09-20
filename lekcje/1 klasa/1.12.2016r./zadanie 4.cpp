// Rozwiązanie od Krzysztofa Wodzińskiego + mała zmiana odemnie

// Acheiro.cpp : Defines the entry point for the console application.

#include "iostream"
#include "cstdlib"

using namespace std;

void MakeVertical(int x);
void MakeHorizontal(int height, int width);

int main()
{
	int height;
	int width;

	cout << "Height:";
	cin >> height;

	cout << "Width:";
	cin >> width;

	cout << endl;

	//Top
	MakeVertical(width);
	//Middle
	MakeHorizontal(height, width);
	//Bot
	MakeVertical(width);

	system ("pause");
	cin.get();
    return 0;
}

void MakeVertical(int x)
{
	//Will do a certain thing for X times
	//Without breaking line in each time
	for (int i = 1; i <= x; i++)
	{
		cout << "*";
	}

	cout << endl;
}

void MakeHorizontal(int height, int width)
{
	//Will do a certain thing for X times
	//Will break the line each time
	int currentLine = 1;
	int offSet;

	if(width>=height) // Moja poprawka :>
	{
		offSet = width / height;
	}
	else
	{
		offSet = height / width;
	}

	for (int i = 1; i <= height; i++)
	{
		//Left wall
		cout << "*";
		//Space between Left and Right
		for (int i = 1; i < width - 1; i++)
		{
			if(i == currentLine)
			{
				cout << "*";
			}
			else
			{
				cout << " ";
			}
		}
		//Right wall
		cout << "*";

		cout << endl;
		currentLine += offSet;
	}
}
