#include <iostream>
#include <Windows.h>
using namespace std;


//void PrintNumbers(int N)
//{
//	for (int i = 1; i <= N; i++)
//	{
//		cout << i << " " << endl;
//	}
//}
//
//void PrintNumbers_Recursive(int N)
//{
//	if (N < 0)
//		return;
//	cout << N << " ";
//	PrintNumbers_Recursive(N - 1);
//}
//
//int SumNumbers(int N)
//{
//	if (N == 0)
//	{
//		return 0;
//	}
//	return N + SumNumbers(N - 1);
//}
//
//int FactorialNumbers(int N)
//{
//	if (N == 0)
//	{
//		return 1;
//	}
//	return N * FactorialNumbers(N - 1);
//}

void PrintStars(int N)
{
	if (N < 0)
	{
		return;
	}
	for (int i = 0; i < N; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
		cout << "*";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		cout << char(233);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
		cout << char(237);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << char(225);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		cout << char(227);
		//cout << "*";
	}
	cout << endl;
	PrintStars(N - 1);
	for (int i = 0; i < N; i++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
		cout << "*";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
		cout << char(233);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
		cout << char(237);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
		cout << char(225);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);
		cout << char(227);
		//cout << "*";
	}
	cout << endl;
}


int main()
{
	//PrintNumbers(10);
	//PrintNumbers_Recursive(3);
	//cout << SumNumbers(3) << endl;
	while(1)
		PrintStars(5);
}