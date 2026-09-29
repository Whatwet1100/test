#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long

ll gcd(ll a, ll b)
{
    while(b)
    {
        ll t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main()
{
    ll a, b, c;
    cin >> a >> b >> c;

    ll ma = max({a, b, c});
    ll mi = min({a, b, c});

    ll ave = gcd(ma, mi);
    cout << mi / ave << "/" << ma / ave << endl;

    return 0;
}