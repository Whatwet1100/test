#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    double a, b, c;
    cin >> a >> b >> c;
    double m = max({a, b, c});
    cout << m << endl;

    return 0;
}