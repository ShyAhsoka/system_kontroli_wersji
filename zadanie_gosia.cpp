#include<iostream>

using namespace std;

int bezwzgledna(int n)
{
	if (n < 0)
	{
        // n bedzie tu rowne n pomnozonemu przez -1 co spowoduje liczbe bezgledna
		n = n * (-1);
	}
	return n;
}

int main()
{
	int n;
	cin >> n;
	cout << "Wartosc bezwzgledna liczby: " << n << " to: " << bezwzgledna(n);
	return 0;
}