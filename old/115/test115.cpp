#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> squ(n, vector<int>(m, 0));
    for(int i = 0; i < n; i++)
    {
        for(int t = 0; t < m; t++)
        {
            int temp;
            cin >> temp;
            squ[i][t] = temp;
        }
    }    
    int goal, cnt = 0;
    cin >> goal;
    for(int i = 0; i < n; i++)
    {
        for(int t = 0; t < m; t++)
        {
            if(squ[i][t] == goal) 
            {
                cout << i;
                return 0;
            }
        }
    }
    cout << -1;
    return 0;
}