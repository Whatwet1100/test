#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    while (true)
    {
        cout << "ultimate time machine" << endl;
        int a;
        Sleep (1000);
        cout << "how many seconds do you want to travel?" << endl;
        cin >> a;

        for (int i = 0; i < a; i += 2)
        {
            Sleep(1000);
            cout << "you have traveled " << i + 1 << " seconds" << endl;
        }
        cout << "you have reached your destination" << endl;

    }
}