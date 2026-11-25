#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    int n;
    cin >> n;

    vector<int> proc;
    proc.push_back(n);

    while(n != 1)
    {
        if(n % 2 == 0)
        {
            n = n / 2;
            proc.push_back(n);
        }
        else
        {
            n = 3 * n + 1;
            proc.push_back(n);
        }

    }

    for (int i = proc.size() - 1; i >= 0; i--)
    {
        cout << proc[i] << " ";
    }

    return 0;
}