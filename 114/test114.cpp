#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int a;
    string b;
    cin >> a >> b;
    int bsiz = b.size();

    vector<int> bve, res;

    for(int i = 0; i < bsiz; i++)
    {
        bve.push_back(b[i] - '0');
    }

    for(int i = 0; i < bsiz; i++)
    {
        res.push_back(bve[i] * a);
    }
//unf
    

    return 0;
}