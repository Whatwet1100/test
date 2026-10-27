#include <iostream>
#include <string>
using namespace std;

void sbcnt(int (&cnt)[10], string n)
{
    for (auto ch : n)
    {
        int num = ch - '0';
        cnt[num]++;
    }
}

int main()
{
    int cnt[10] = {0};
    int m, n;
    cin >> m >> n;
    for(int i = m; i <= n; i ++)
    {
        sbcnt(cnt, to_string(i));
    }

    for(int i = 0; i < 10; i++)
    {
        cout << cnt[i] << " ";
    }

    return 0;
}