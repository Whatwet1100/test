#include <iostream>
#include <vector>
#include <algorithm>
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
    vector<int> pal;

    for (int d1 = 1; d1 <= 9; d1+=2) 
    {
        pal.push_back(d1);
        pal.push_back(d1*10 + d1);
        for (int d2 = 0; d2 <= 9; d2++)
        {
            pal.push_back(d1*100 + d1 + d2*10);
            pal.push_back(d1*1000 + d1 + d2*100 + d2*10);
            for (int d3 = 0; d3 <= 9; d3++)
            {
                pal.push_back(d1*10000 + d1 + d2*1000 + d2*10 + d3*100);
                pal.push_back(d1*100000 + d1 + d2*10000 + d2*10 + d3*1000 + d3*100);
                for(int d4 = 0; d4 <= 9; d4++)
                {
                    pal.push_back(d1 + d2*10 + d3*100 + d4*1000 + d3*10000 + d2*100000 + d1*1000000);
                    pal.push_back(d1 + d2*10 + d3*100 + d4*1000 + d4*10000 + d3*100000 + d2*1000000 + d1*10000000);
                }   
            }
        }
    }

    sort(pal.begin(), pal.end());

    int st, ed;
    cin >> st >> ed;

    for (auto num : pal)
    {
        if(num > ed)
        {
            break;
        }
        if(num >= st)
        {
            if(isPrime(num)) cout << num << endl;
        }
    }
    return 0;
}