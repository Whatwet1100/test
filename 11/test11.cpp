#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
using namespace std;

int main()
{
    double a;
    cin >> a;
    string stra = to_string(a);
    stringstream ss;
    ss << fixed << setprecision(1) << a;
    stra = ss.str();

    string b, c, d, e, f, temp;
    b = stra[0];
    c = stra[1];
    d = stra[2];
    e = stra[3];
    f = stra[4];

    temp = f + e + d + c + b;
    float res = stod(temp);

    cout << res << endl;

    return 0;
}