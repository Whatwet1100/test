#include <iostream>
using namespace std;

int main()
{
    int i, a = 0, b = 0;
    cin >> i;

    if (i % 2 == 0) a = 1;
    if (i > 4 && i <= 12) b = 1;
    if (a + b == 2) cout << "1 ";
    else cout << "0 ";
    if (a + b >= 1) cout << "1 ";
    else cout << "0 ";
    if (a + b == 1) cout << "1 ";
    else cout << "0 ";
    if (a + b == 0) cout << "1 ";
    else cout << "0 ";
    
    return 0;
}