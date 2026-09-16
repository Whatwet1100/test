#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, a[3], b[3];
    vector<int> c;
    cin >> n;
    for(int i = 0; i < 3; i ++)
    {
        cin >> a[i] >> b[i];
        int temp;
        temp = (n + a[i] - 1) / a[i] * b[i];
        c.push_back(temp);
    }
    int min = *min_element(c.begin(), c.end());
    cout << min << endl;
    
    return 0;
}