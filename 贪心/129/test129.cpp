#include <iostream>
using namespace std;

void moneycount(int n)
{
    int type[7] = {100, 50, 20, 10, 5, 2, 1}, use[7] = {0};

    int pre = n, monused = 0;

    for(int i = 0; i < 7; i ++)
    {
        while(type[i] <= n)
        {
            use[i] += 1;
            n -= type[i];
            monused += 1;
        }
    }

    int cnt = 0;
    for(int num : use)
    {
        if(num > 0)
        {
            cnt += 1;
        }
    }

    cout << monused << " ";
    
    for(int i = 0; i < 7; i ++)
    {
        if(use[i] == 1)
        {
            cout << type[i];
            cnt -= 1;
            if(cnt > 0)
            {
                cout << "+";
            }
        }
        else if (use[i] > 1)
        {
            cout << type[i] << "*" << use[i];
            cnt -= 1;
            if(cnt > 0)
            {
                cout << "+";
            }
        }

    }
    cout << "=" << pre << endl;
}

int main()
{
    int n;
    while(cin >> n)
    {
        moneycount(n);
    }
}