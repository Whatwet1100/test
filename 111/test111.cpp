#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, trans = 0;
    cin >> n;

    vector<int> squ;

    while(squ.size() < n*n)
    {
        int temp;
        cin >> temp;
        for(int i = 0; i < temp; i++)
        {
            squ.push_back(trans % 2);
        }
        trans += 1;
    }

    int c = 0;
    for(int i = 0; i < n; i ++)
    {
        for(int t = 0; t < n; t ++)
        {
            cout << squ[c];
            c += 1;
        }
        cout << endl;
    }

    return 0;
}