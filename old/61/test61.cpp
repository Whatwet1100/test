#include <iostream>
using namespace std;

int main()
{
    int x, n, s = 0;
    cin >> x >> n;
    for(int i = 0; i < n; i++)
    {
        if ((x + i) % 7 == 6 || (x + i) % 7 == 0)
        {
            s = s + 0;
        }
        else
        {
            s = s + 250;
        }


    }
    cout << s << endl;

    return 0;
}