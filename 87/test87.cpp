#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

#define ll long long

bool ana(ll n)
{
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;

    ll lmt = sqrt(n);
    for (ll i = 3; i <= lmt; i++)
    {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    
    ll a, b, c, d;
    bool flag = false;
    cin >> a;

    if (a % 2 == 0)
    {
        b = 2;
        c = a / 2;
        flag = true;
    }

    for(ll i = 3; i <= a / 2; i += 2)
    {
        if(flag) break;
        if (ana(i) && a % i == 0)
        {
            b = i;
            c = a / i;
            flag = true;
            break;
        }
    }


    d = max(b, c);
    cout << d << endl;

    return 0;
}