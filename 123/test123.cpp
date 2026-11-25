#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> all;
    

    for(int i = 0; i < n; i++)
    {
        int len = all.size();
        int a, b;
        cin >> a >> b;

        if(len == a)
        {
            all.push_back(b);
            for(int num : all)
            {
                cout << num << " ";
            }
            cout << endl;
        }
        else if (a > len)
        {
            cout << "error" << endl;

        }
        else
        {
            all.insert(all.begin() + a, b);
            for(int num : all)
            {
                cout << num << " ";
            }
            cout << endl;
        }

    }

    return 0;
}