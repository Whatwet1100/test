#include <iostream> //preparing necessary header files
#include <windows.h>
using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
    SetConsoleOutputCP(65001);

    while (true)
    {
        cout << "please chose a number:1plus 2minus 3multiply 4divide 5quit" << endl;
        int a,b,c; //a type, b and c  are two numbers
        cin >> a;

        if (a == 1)
        {
            cout << "plus" << endl;
            cin >> b >> c;
            a = b + c;
            cout << a << endl;
        }
        else if (a == 2)
        {
            cout << "minus" << endl;
            cin >> b >> c;
            a = b - c;
            cout << a << endl;
        }
        else if (a == 3)
        {
            cout << "multiply" << endl;
            cin >> b >> c;
            a = b * c;
            cout << a << endl;
        }
        else if (a == 4)
        {
            cout << "divide" << endl;
            cin >> b >> c;
            if (c == 0)
            {
                cout << "divisor can not be zero" << endl;
                continue;
            }
            a = b / c;
            cout << a << endl;
        }
        else if (a == 5)
        {
            cout << "quit" << endl;
            break;
        }
        else
        {
            cout << "invalid input, please try again" << endl;
        }
    }
    

    return 0;
}