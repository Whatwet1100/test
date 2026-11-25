#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    if (a == 1)
    {
        if (b == d || c == e)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else if (a == 2)
    {
        cout << "No" << endl;
    }
    else if (a == 3)
    {
        if (abs(d-b) == 2 && abs(e-c) == 1)
        {
            cout << "Yes" << endl;
        }
        else if (abs(d-b) == 1 && abs(e-c) == 2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }
    else if (a == 4)
    {
        if (abs(b - d) == 2 && abs(c - e) == 2)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }


    return 0;
}