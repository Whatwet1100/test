#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> a;
    int n = 3;     
    double t;
    for(int i = 0; i < n; i++)
    {
        cin >> t;
        a.push_back(t);
    }

    int value = 0;

    for(int i = 0; i < 3; i++)
    {
        if(a[i] < 60)
        {
            value += 1;
        }
    }

    if(value == 1)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}