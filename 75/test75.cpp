#include <iostream>
using namespace std;

int ana(int a)
{
    int lft = a, n = 0;

    while(lft > 0)
    {
        n ++;
        lft = lft - n;
    }
    return n;
}

int main()
{
    int k, res = 0;
    cin >> k;
    for (int i = 1; i <= k; i++)
    {
        int n = ana(i);
        res = res + n;
    }
    cout << res << endl;

    return 0;
}