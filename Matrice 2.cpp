// Matrice 2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "pch.h"
#include <iostream>
using namespace std;


int main()
{
	
	double a[3][3]{ {0,1,2},{2,5,8},{6,5,4} };
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) cout << a[i][j] << " ";
		cout << endl;
	}
	int d = 0;
	bool s = false;
	cout << "\n----------------------------------\n" << endl;
	do
	{
		s = false;
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (a[i][j] < a[i][j+1])
				{
					d = a[i][j];
					a[i][j] = a[i][j + 1];
					a[i][j + 1] = d;
					s = true;
				}
			}
		}
	} while (s == true);


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) cout << a[i][j] << " ";
		cout << endl;
	}
	
}


