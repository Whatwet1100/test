#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<double> a;
    int n = 2;     
    double t;
    for(int i = 0; i < n; i++)
    {
        cin >> t;
        a.push_back(t);
    }

    if(a[0] > a[1])
    {
        cout << ">" << endl;
    }
    else if(a[0] == a[1])
    {
        cout << "=" << endl;
    }
    else
    {
        cout << "<" << endl;
    }

    return 0;
}