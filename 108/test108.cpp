#include <iostream>
#include <vector>
using namespace std;

void addsp(int n)
{
    if(n <= 9)
    {
        cout << "  ";
    }
    if(n > 9)
    {
        cout << " ";
    }
}

int main()
{
    int n, cnt = 1;
    cin >> n;
    
    vector<vector<int>> pic(n, vector<int>(n, 0));
    int pla[2] = {0};//0 横 1 纵.
    int whe = 0; // %0右 1下 2左 3上.
    for(int i = 1; i <= n*n; i++)
    {
        if(whe % 4 == 0)
        {


            pic[pla[0]][pla[1]] = i;
            
            if(pla[0] + 1 > n - 1) whe += 1, pla[1] += 1;
            else if(pic[pla[0] + 1][pla[1]] != 0) whe += 1, pla[1] += 1;
            else pla[0] += 1;
        }
        else if(whe % 4 == 1)
        {

            pic[pla[0]][pla[1]] = i;
            
            if(pla[1] + 1 > n - 1) whe += 1, pla[0] -= 1;
            else if(pic[pla[0]][pla[1] + 1] != 0) whe += 1, pla[0] -= 1;
            else pla[1] += 1;
        }
        else if(whe % 4 == 2)
        {

            pic[pla[0]][pla[1]] = i;
            
            if(pla[0] - 1 < 0) whe += 1, pla[1] -= 1;
            else if(pic[pla[0] - 1][pla[1]] != 0) whe += 1, pla[1] -= 1;
            else pla[0] -= 1;
        }
        else if(whe % 4 == 3)
        {

            pic[pla[0]][pla[1]] = i;
            
            if(pla[1] - 1 < 0) whe += 1, pla[0] += 1;
            else if(pic[pla[0]][pla[1] - 1] != 0) whe += 1, pla[0] += 1;
            else pla[1] -= 1;
        }

    }
    for(int i = 0; i < n; i++)
    {
        for(int t = 0; t < n; t++)
        {
            addsp(pic[t][i]);
            cout << pic[t][i];
        }
        cout << endl;
    }

    return 0;
}