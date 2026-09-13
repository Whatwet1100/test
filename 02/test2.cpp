// hello world
#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);
    
    std::cout << "Hello, World!" << std::endl;

    std::cout << "你好，世界！";
    std::cout << std::endl;

    std::string ch;
    std::cout << "1 + 1 = ？？？" << std::endl;
    std::cin >> ch;


    if (ch == "1") {
        std::cout << "输入正确！" << std::endl;
    } else {
        std::cout << "输入错误！" << std::endl;
    }


    return 0;}