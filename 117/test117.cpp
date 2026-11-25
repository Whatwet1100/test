#include <iostream>
using namespace std;

void hanoi(int n, char s, char a, char d)
{
    if(n == 1)
    {
        cout << s << " to " << d << endl;
        return;
    }

    hanoi(n - 1, s, d, a);
    cout << s << " to " << d << endl;
    hanoi(n - 1, a, s, d);

}

int main()
{
    int n;
    cin >> n;
    hanoi(n, 'A', 'B', 'C');

    return 0;
}