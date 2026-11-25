#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    getline(cin, a);
    int b, c, d, e;
    b = a.size();
    for(int i = 0; i < b; i++)
    {
        if(a[i] == ' ')
        {
            c = i;
            break;
        }
    }

    for(int i = 0; i < b; i++)
    {
        if(a[i] == ' ')
        {
            d = d + 1;
        }
        if(d == 2)
        {
            e = i;
            break;
        }
    }


    string f = a.substr(c + 1, e - c - 1);

    int h = stol(f);
    cout << h << endl;


    return 0;
}