#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;
    int cnt[10] = {0};

    for (int i = 1; i <= m; i++)
    {
        int lst = i % 10;
        int rst = i/ 10;
        cnt[lst]++;

        while (rst > 0)
        {
            lst = rst % 10;
            rst = rst / 10;
            cnt[lst] ++;
        }
        
    }
    cout << cnt[n] << endl;
    return 0;
}