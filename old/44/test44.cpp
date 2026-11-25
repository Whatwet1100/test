#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    cout << fixed << setprecision(5);
    double a,b,c,x,y,d;
    cin >> a >> b >> c;
    d = b*b - 4*a*c;

    if (fabs(d) < 1e-8)
    {
        x = -b / (2*a);
        cout << "x1=x2=" << x << endl;
    }
    else if (d < 0)
    {
        cout << "No answer!"  << endl;
    }
    else
    {
        x = (-b + sqrt(b*b - 4*a*c)) / (2*a);
        y = (-b - sqrt(b*b - 4*a*c)) / (2*a);
        if (x > y)
        {
            swap(x,y);
        }

        cout << "x1=" << x << ";x2=" << y << endl;
        
    }

    return 0;
}