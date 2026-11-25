#include <iostream>
using namespace std;

int main()
{
    
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << 1 << endl;
        return 0;
    }
    int res = 1;
    for(int i = 1; i <= n; i++)
    {
        res *= i;
    }

    cout << res << endl;
    return 0;
}