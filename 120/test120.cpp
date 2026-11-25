#include <iostream>
using namespace std;

bool isPrime(int x)
{
    if(x <= 1) return false;
    if(x == 2) return true;
    if(x % 2 == 0) return false;
    for(long long i=3; i*i <= x; i+=2)
    {
        if(x%i == 0) return false;
    }
    return true;
}

int main()
{
    int n, cnt = 1;
    cin >> n;

    for(int i = 3; i <= n; i += 2)
    {
        if(isPrime(i)) cnt ++;
    }

    cout << cnt << endl;
    return 0;
}