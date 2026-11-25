#include <iostream>
using namespace std;

void Check(int l, int r, int m)
{

    if(m == 0)
    {
        cout << r << endl;
        return;
    }

    int temp;
    cin >> temp;
    if(r == l)
    {
        cout << r << endl;
        return;
    }
    if(temp == 2)
    {
        cout << r << endl;
        return;
    }

    int n = r - l + 1;
    

    if(temp == 0)
    {
        if(n % 2 == 0)
        {
            Check(l, l + n/2 - 1, m - 1);
        }
        else
        {
            Check(l, l + n/2 - 1, m - 1);
        }
    }
    else if(temp == 1)
    {
        if(n % 2 == 0)
        {
            Check(r - n/2 + 1, r, m - 1);
        }
        else
        {
            Check(r - 1 - n/2 + 1, r - 1, m - 1);
        }
    }

}

int main()
{
    int n, m;
    cin >> n >> m;
    Check(1, n, m);
    return 0;
}