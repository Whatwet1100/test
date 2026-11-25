#include <iostream>
using namespace std;

int main()
{
    int n, x = 0;
    double m = 0;
    cin >> n;

    while(m <= n)
    {
        x++;
        m = m + 1.0/x;       
    }

    cout << x << endl;
    return 0;
}