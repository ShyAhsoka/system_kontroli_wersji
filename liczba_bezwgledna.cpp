#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    cout << "|" << n << "| = ";
    if (n >= 0)
    {
         cout << n << endl;
    }
    else
    {
        cout << n * (-1) << endl;
    }
}