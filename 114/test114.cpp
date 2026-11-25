#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    vector<int> anum, bnum;
    int asiz = a.size(), bsiz = b.size();

    for(int i = 0; i < asiz; i++)
    {
        int temp = a[i] - '0';
        anum.push_back(temp);
    }
    for(int i = 0; i < bsiz; i++)
    {
        int temp = b[i] - '0';
        bnum.push_back(temp);
    }

    int tesiz = asiz + bsiz - 1;
    vector<int> res(tesiz, 0);

    int whe1 = 0, whe2 = 0;


    // 这里需要改！！！
    for(auto num1 : anum)
    {
        whe2 = 0;
        for(auto num2 : bnum)
        {
            int temp = num1 * num2;
            res[whe1 + whe2] += temp;
            whe2 += 1;
        }
        whe1 += 1;
    }


    int storage = 0;

    for(int i = tesiz - 1; i >= 0; i--)
    {
        res[i] += storage;
        if(res[i] > 9)
        {
            storage = res[i] / 10;
            res[i] = res[i] % 10;
        }
        else
        {
            storage = 0;
        }
    }

    vector<int> extnum;
    while(storage > 0)
    {
        if(storage > 9)
        {
            int temp = storage % 10;
            extnum.push_back(temp);
            storage = storage / 10;
        }
        else if(storage > 0 && storage < 10)
        {
            extnum.push_back(storage);
            storage = 0;
        }
    }

    int extsiz = extnum.size();
    for(int i = extsiz - 1; i >= 0; i--)
    {
        cout << extnum[i];
    }

    for(int num : res)
    {
        cout << num;
    }

    return 0;
}

// 放弃了
