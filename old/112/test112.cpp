#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    string test;
    cin >> test;
    vector<int> squ;
    vector<int> cnt;

    int n = test.size();

    for(int i = 0; i < n; i ++)
    {
        int x = test[i] - '0';
        squ.push_back(x);
    }

    for(int i = 1; i < n; i ++)
    {
        string temp;
        cin >> temp;
        for(int t = 0; t < n; t ++)
        {
            int x = temp[t] - '0';
            squ.push_back(x);
        }

    }

    int trans = 0;
    int len = 0;
    for(int num : squ)
    {
        
        if(trans % 2 == num)
        {
            len += 1;
        }
        else
        {
            trans += 1;
            cnt.push_back(len);
            len = 1;
        }
    }
    cnt.push_back(len);

    cout << n << " ";

    for(int num : cnt)
    {
        cout << num << " ";
    }


    return 0;
}