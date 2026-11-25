#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> m;
    for(int i = 0; i < n; i++)
    {
        int temp, ok = 0;
        cin >> temp;

        for(auto num : m)
        {
            if (num < temp) ok++;
        }
        m.push_back(temp);
        cout << ok << " ";
    }

    return 0;
}