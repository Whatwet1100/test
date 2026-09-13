#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    cin >> a;
    b = 50 + a / 3;
    c = a / 1.2;
    if(b < c)
    {
        cout << "Bike" << endl;
    }
    else if(b > c)
    {
        cout << "Walk" << endl;
    }
    else
    {
        cout << "All" << endl;
    }
    return 0;
}
