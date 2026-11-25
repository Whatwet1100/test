#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    
    double a, b, c, m;
    cin >> a >> b >> c;
    m = max({a, b, c}) / (max({a + b, b, c}) * max({a, b, b + c}));
    printf("%.3lf", m);
    return 0;
}