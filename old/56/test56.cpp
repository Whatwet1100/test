#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ( a + b > c && b + c > a && a + c > b)
    {
        if (a * a + b * b == c * c || b * b + c * c == a * a || a * a + c * c == b * b) cout << "Right triangle" << endl;
        if (a * a + b * b > c * c && b * b + c * c > a * a && a * a + c * c > b * b) cout << "Acute triangle" << endl;
        if (a * a + b * b < c * c || b * b + c * c < a * a || a * a + c * c < b * b) cout << "Obtuse triangle" << endl;
        if (a == b || b == c || a == c) cout << "Isosceles triangle" << endl;
        if (a == b && b == c) cout << "Equilateral triangle" << endl;
    }


    else cout << "Not triangle" << endl;

    return 0;
}