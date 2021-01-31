// OOP assignment 1 Q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void printOdds(int num)
{
	for (int i = 0; i <= num; i++)
	{
		/*cout << i % 2 << ',';*/
		if (i % 2 == 1) 
		{
			cout << i;
			if(i != num)
			{
				cout << ',';
			}
		}
	}
}

int countOdds(int arr[], int size)
{
	int count = 0;
	for (int i = 0; i <= size; i++)
	{
		if (arr[i] % 2 == 1)
		{
			/*cout << arr[i];*/
			count++;
		}
	}
	return count;
}



void getAndPrintNameChars()
{
	string name;
	cout << "Enter a name" << endl;
	cin >> name;
	for (int i = 0; i < name.length(); i++)
	{
		cout << i+1 << ". " << name[i] << endl;
	}
}

double frac(double d)
{
	
	return d - (int)d;

}

void printBinary(int a)
{
	int i;
	int count = 0;
	int arr[99];
	while (a != 0)
	{
		i = a % 2;
		arr[count] = i;
		a = a / 2;
		count++;
	}

	//Loop through the array, in reverse and print as you go arr[pos]
	//10011
	for (int i = count-1; i >= 0; i--)
	{
		cout << arr[i];
	}


}

void test()
{
	int arr[2][2];

	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 2; j++)
		{
			cout << arr[i][j];
		}
	}
}

int main()
{
	/*printOdds(11);*/
	//int arr[] = { 3, 9, 4, 6, 7, 8, 1 };
	//cout << "Number of odds = " << countOdds(arr, 7) << endl;
	/*getAndPrintNameChars();*/
	/*cout << frac(4.32) << endl;*/
	//printBinary(19);
	test();
	return 0;
}


