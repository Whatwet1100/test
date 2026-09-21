#include <iostream>
using namespace std;

int main()
{
    int n, s = 1;
    cin >> n;
    for (int i = n; i>0; i--)
    {
        for (int t = 0; t < i; t ++)
        {
            if (s < 10)
            {
                cout << "0" << s;
                s++;
            }
            else
            {
                cout << s;
                s++;
            }
        }
        cout << "\n";
    }

    return 0;
}