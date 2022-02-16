#include <iostream>
using namespace std;


int main()
{
    int n;
    cin >> n;
    cout << "|" << n << "| = ";
    if (n >= 0)
    {
        // wyswietla liczbe bezwgledna
         cout << n << endl;
    }
    else
    {
        //dodaje -1 jesli liczba jest ujemna aby otrzymac bezwgledna liczbe
        cout << n * (-1) << endl;
    }
}