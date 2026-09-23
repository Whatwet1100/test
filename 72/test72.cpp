#include <iostream>
using namespace std;

inline int count_num(int x, int a)
{
    int res = 0;

    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);


    int m, n, res = 0;
    cin >> m >> n;

    for (int i = 1; i <= m; i++)
    {
        int temp = count_num(i, n);
        res = res + temp;

    }
    cout << res << endl;
    return 0;
}

//放弃了这段代码。。。