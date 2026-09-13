#include <iostream>
#include<vector>

using namespace std;

int main()
{
    int a;
    cin >> a;

    int value = 0;

    if(a % 3 == 0)
    {
        cout << "3 ";
        value += 1;
    }
    if(a % 5 == 0)
    {
        cout << "5 ";
        value += 1;
    }
    if(a % 7 == 0)
    {
        cout << "7 ";
        value += 1;
    }

    if(value == 0)
    {
        cout << "n" << endl;
    }

    return 0;
}