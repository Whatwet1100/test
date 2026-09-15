#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> a;
    int n = 10;     
    int t, h, s = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> t;
        a.push_back(t);
    }

    cin >> h;
    h = h + 30;
    for(int x = 0; x < n; x++)
    {
        if (a[x] <= h)
        {
            s++;

        }
    }

    cout << s << endl;


    return 0;

}