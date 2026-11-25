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

        vector<int> temp;
        cin >> a >> b;

        for(int t = 0; t < b; t++)
        {
            int t1;
            cin >> t1;
            temp.push_back(t1);
        }

        if(len == a)
        {
            for(int t = 0; t < b; t++)
            {
                all.push_back(temp[t]);
            }

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
            for(int t = 0; t < b; t++)
            {
                all.insert(all.begin() + a + t, temp[t]);
            }
            for(int num : all)
            {
                cout << num << " ";
            }
            cout << endl;
        }

    }

    return 0;
}