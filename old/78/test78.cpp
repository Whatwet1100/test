#include <iostream>
#include <vector>
#include <string>
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

bool is_d(int inp)
{
    bool is_d = true;
    string temp = to_string(inp);
    int len = temp.size();

    for (int i = 0; i <= len / 2 - 1; i++)
    {
        if (temp[i] != temp[len - 1- i])
        {
            is_d = false;
            break;
        }
    }

    return is_d;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int st, ed;
    cin >> st >> ed;
    vector<int> all;

    if(st % 2 == 0)
    {
        st = st + 1;
    }
    
    for (int i = st; i <= ed; i = i + 2)
    {
        if(ana(i) == true)
        {
            if(is_d(i) == true)
            {
                all.push_back(i);
            }

        }
    }

    for(int i = 0; i <= all.size() - 1; i++)
    {
        cout << all[i] << endl;
    }

    return 0;
}

// 放弃了