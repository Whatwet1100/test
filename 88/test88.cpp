#include <iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    int tri = 1, squ = 1;

    for(int i = 1; i <= a; i++)
    {
        for(int j = 1; j <= a; j++)
        {
            if (squ < 10) cout << "0" << squ;
            else cout << squ;
            squ ++;
        }
        cout << endl;
    }

    cout << endl;

    for(int i = 1; i <= a; i++)
    {
        for(int t = 1; t <= a - i; t++) cout << "  ";
        for(int j = 1; j <= i; j++)
        {
            if (tri < 10) cout << "0" << tri;
            else cout << tri;
            tri ++;
        }
        cout << endl;
    }

    return 0;
}