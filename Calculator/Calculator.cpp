#include "pch.h"
#include <iostream>
#include "IncludeGuards.h"

using namespace std;

int main()
{
	string s;
	while (true)
	{
		system("cls");
		cin >> s;
		cout << check(s) << endl;
		system("pause");
	}
}
