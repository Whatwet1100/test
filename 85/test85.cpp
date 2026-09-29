#include <iostream>
#include <vector>
using namespace std;
#define ll long long

int main()
{
    int n;
    ll far = 1, t = 1;
    vector<ll> a;

    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        ll temp;
        cin >> temp;
        a.push_back(temp);
        if(a[i] - a[i - 1] == 1)
        {
            t += 1;
            if (t > far)
            {
                far = t;
            }
        }
        else
        {
            t = 1;
        }

    }
    cout << far << endl;


    return 0;
}