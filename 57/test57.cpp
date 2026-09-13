#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
        int e, a, b, c;
        cin >> e;
        if (e <= 150)
        {
            a = e;
            b = 0;
            c = 0;
        }
        else if (e <= 400)
        {
            a = 150;
            b = e - 150;
            c = 0;
        }
        else
        {
            a = 150;
            b = 400 - 150;
            c = e - 400;
        }

        cout << fixed << setprecision(1) << a * 0.4463 + b * 0.4663 + c * 0.5663 << endl;

    return 0;
}