#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double w, h, b;
    cin >> w >> h;
    b = w / (h * h);
    if (b < 18.5)
    {
        printf("Underweight");
    }
    else if (b >= 18.5 && b < 24)
    {
        printf("Normal");
    }
    else if (b >= 24)
    {
        cout << setprecision(6);
        cout << b << endl;
        printf("Overweight");
    }

    return 0;
}