#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    vector<int> a;
    int n = 3;     
    int t;
    for(int i = 0; i < n; i++)
    {
        cin >> t;
        a.push_back(t);
    }

    cout << setw(8) << a[0] << " "
        << setw(8) << a[1] << " "
        << setw(8) << a[2] << endl;

    return 0;
}