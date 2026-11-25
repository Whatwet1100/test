#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<long long> all;

    long long temp;
    cin >> temp;

    while(temp != 0)
    {
        all.push_back(temp);
        cin >> temp;
    }

    for(int i = all.size() - 1; i >= 0; i--)
    {
        cout << all[i] << " ";
    }

    
    return 0;
}