#include <iostream>
using namespace std;

int calculate(int a, int b)
{
    int temp = 0;
    for (int i = a; i <= b; i++)
    {
        temp = temp + i;
    }

    return temp;
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << calculate(a, b) << endl;
    cout << calculate(c, d) << endl;

    return 0;
}

