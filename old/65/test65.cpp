#include <iostream>
#include <iomanip>
#include <vector>
#include <numeric>
using namespace std;

int main()
{
    int n, k;
    vector <double> a, b;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        if (i % k < 1e-8)
        {
            a.push_back(i);
        }
        else
        {
            b.push_back(i);
        }
    }

    double sum_a = accumulate(a.begin(), a.end(), 0);
    double sum_b = accumulate(b.begin(), b.end(), 0);

    cout << fixed << setprecision(1);
    cout << sum_a / a.size() << " " <<  sum_b / b.size() << endl;

    return 0;
}