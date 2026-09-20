#include <iostream>
using namespace std;

int main()
{
    int a, n = 1;
    cin >> a;
    while (a > 1)
    {
        a = a/2;
        n++;
    }
    cout << n << endl;


    return 0;
}