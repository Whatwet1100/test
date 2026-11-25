#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a, b;
    cout << fixed << setprecision(3);
    cin >> a >> b;
    cout << b / a * 100 << "%" << endl;

    return 0;
}