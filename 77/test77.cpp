#include <iostream>
#include <cmath>
using namespace std;

bool ana(int n)
{
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    int lmt = sqrt(n);
    for (int i = 3; i <= lmt; i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (n <= 1)
    {
        cout << 0 << endl;
        return 0;
    }
    if (n == 2) 
    {
        cout << 2 << endl;
        cout << 1 << endl;
        return 0;
    }

    cout << 2 << endl;

    int st = 1, sum = 2, x = 1;
    while (sum < n)
    {
        st += 2;
        if (ana(st) == true)
        {
            sum = sum + st;
            
            if (sum <= n)
            {
                x += 1;
                cout << st << endl;
            }
            
        }
    }
    
    cout << x << endl;
    
    return 0;
}