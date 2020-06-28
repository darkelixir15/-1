#include <iostream>
#include <cstring>
using namespace std;

void n_right_character(string str, int n)
{
	string result;
	result = str.substr(str.length() - n);
	cout << result;
}

int main()
{
	string str;
	cout << "Enter the string:";
	cin >> str;
	int n;
	cout << "Enter the value of n:";
	cin >> n;
	n_right_character(str, n);
}
