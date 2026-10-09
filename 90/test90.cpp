#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int in = 0, rest = 0;
    bool bank = false;

    for(int i = 0; i < 12; i++)
    {
        rest += 300;
        int temp;
        cin >> temp;

        rest -= temp;
        if(rest < 0)
        {
            cout << "-" << i + 1 << endl;
            bank = true;
            break;
        }

        if(rest >= 100)
        {
            int n = rest / 100;
            in += n * 100;
            rest -= 100 * n;
        }

    }

    if (bank == false) cout << rest + in * 1.2 << endl;
    return 0;
}