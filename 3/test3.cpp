#include <iostream>
#include <windows.h>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main(void) {
    SetConsoleOutputCP(65001);
    cout << "欢迎使用计算器" << endl;
    Sleep(1000);
    cout<< "输入1：加法，输入2：减法，输入3：乘法，输入4：除法" << endl;
    string ch;
    cin >> ch;

    while (true)
    {
        string ch;
        cin >> ch;
        if (ch == "1")
        {
            cout << "2" << endl;
        } 
        else if (ch == "2")
        {
            cout << "0" << endl;
            break;
        }
    }



    return 0;
}
