#include <iostream>
using namespace std;

int main()
{
    int a[5], b[5], s, e;
    cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4];
    s = a[0] + a[1] + a[2] + a[3] + a[4];

    for(int i = 0; i <= 4; i++)
    {
        b[i] = a[i] / 3;
        if(i == 0)
        {
            a[0] = b[0];
            a[4] = a[4] + b[0];
            a[1] = a[1] + b[0];
        }
        else if (i == 4)
        {
            a[4] = b[4];
            a[0] = a[0] + b[4];
            a[3] = a[3] + b[4];
        }
        else
        {
            a[i] = b[i];
            a[i - 1] = a[i -1] + b[i];
            a[i + 1] = a[i + 1] +b[i];
        }
  
    }

    e = a[0] + a[1] + a[2] + a[3] + a[4];
    cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << endl; 
    cout << s - e << endl;
    

    return 0;
}