#include <iostream>
#include <vector>
using namespace std;

vector<int> exc(vector<int> tri)
{
    vector<int> res;
    int size = tri.size();
    if(size == 1)
    {
        tri.push_back(1);
        return tri;
    }

    res.push_back(1);
    for(int i = 0; i < size - 1; i++)
    {
        res.push_back(tri[i] + tri[i + 1]);
    }
    res.push_back(1);
    return res;

}

int main()
{
    int n;
    cin >> n;

    vector<int> tri;
    if(n == 1)
    {
        printf("1\n");
        return 0;
    }

    tri.push_back(1);
    cout << 1 << endl;


    for(int i = 0; i < n - 1; i++)
    {
        tri = exc(tri);
        for(auto t : tri)
        {
            cout << t << " ";
        }
        cout << endl;
    }

    return 0;
}