#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
    double a;
    string b;
    cin >> a >> b;

    if(a <= 1000)
    {
        if(b == "y")
        cout << 8 + 5 << endl;
        else
        {
            cout << 8 << endl;
        }
    }
    else
    {
        if(b == "y")
        cout << ceil((a - 1000) / 500) * 4 + 8 + 5 << endl;
        else
        {
            cout << ceil((a - 1000) / 500) * 4 + 8 << endl;
        }   
    }

    return 0;
}