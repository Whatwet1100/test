#include <iostream>
using namespace std;

void num(int line, char n)
{
    if(line == 1)
    {
        if(n == '0') cout << "XXX";
        else if(n == '1') cout << "..X";
        else if(n == '2') cout << "XXX";
        else if(n == '3') cout << "XXX";
        else if(n == '4') cout << "X.X";
        else if(n == '5') cout << "XXX";
        else if(n == '6') cout << "XXX";
        else if(n == '7') cout << "XXX";
        else if(n == '8') cout << "XXX";
        else if(n == '9') cout << "XXX";
    }
    else if(line == 2)
    {
        if(n == '0') cout << "X.X";
        else if(n == '1') cout << "..X";
        else if(n == '2') cout << "..X";
        else if(n == '3') cout << "..X";
        else if(n == '4') cout << "X.X";
        else if(n == '5') cout << "X..";
        else if(n == '6') cout << "X..";
        else if(n == '7') cout << "..X";
        else if(n == '8') cout << "X.X";
        else if(n == '9') cout << "X.X";
    }
    else if(line == 3)
    {
        if(n == '0') cout << "X.X";
        else if(n == '1') cout << "..X";
        else if(n == '2') cout << "XXX";
        else if(n == '3') cout << "XXX";
        else if(n == '4') cout << "XXX";
        else if(n == '5') cout << "XXX";
        else if(n == '6') cout << "XXX";
        else if(n == '7') cout << "..X";
        else if(n == '8') cout << "XXX"; 
        else if(n == '9') cout << "XXX";
    }
    else if(line == 4)
    {
        if(n == '0') cout << "X.X";
        else if(n == '1') cout << "..X";
        else if(n == '2') cout << "X..";
        else if(n == '3') cout << "..X";
        else if(n == '4') cout << "..X";
        else if(n == '5') cout << "..X";
        else if(n == '6') cout << "X.X";
        else if(n == '7') cout << "..X";
        else if(n == '8') cout << "X.X"; 
        else if(n == '9') cout << "..X";
    }
    else if(line == 5)
    {
        if(n == '0') cout << "XXX";
        else if(n == '1') cout << "..X";
        else if(n == '2') cout << "XXX";
        else if(n == '3') cout << "XXX";
        else if(n == '4') cout << "..X";
        else if(n == '5') cout << "XXX"; 
        else if(n == '6') cout << "XXX";
        else if(n == '7') cout << "..X";
        else if(n == '8') cout << "XXX";
        else if(n == '9') cout << "XXX";
    }
}


int main()
{
    int n;
    string m;

    cin >> n >> m;

    for(int i = 1; i <= 5; i ++)
    {
        for(int t = 0; t < n; t ++)
        {
            num(i, m[t]);
            if (t != n - 1) cout << ".";
        }
        cout << endl;
    }
    return 0;
}