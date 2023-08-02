#include<iostream>
using namespace std;
int main()
{
	int n, digit, large = 0;
	cin >> n;
	while (n > 0)
	{
		digit = n % 10;
		if (digit > large)
		{
			large = digit;
		}
		n = n / 10;
	}
	cout << large;
}