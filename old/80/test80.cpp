#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

#define ll long long

void opp(ll a)
{
    ll temp = abs(a);
    string temp2 = to_string(temp);

    if(a == 0)
    {
        cout << "0";
        return;
    }

    if(a < 0) cout << "-";
    bool ana = false;

    for(int i = temp2.size() - 1; i >= 0; i--)
    {
        if (temp2[i] != '0') ana = true;
        if(ana == true) cout << temp2[i];
    }

}

int main()
{
    ll inp;
    cin >> inp;
    opp(inp);
    return 0;
}