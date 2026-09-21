#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int ten_left(long long a)
{
    return a % 10;
}
int ten_one(long long a)
{
    return a / 10;
}

vector<int> trans_to_num(vector<long long> a)
{
    int len = a.size();
    long long carry, temp;
    vector<int> res;
    res.push_back(ten_left(a[0]));
    carry = ten_one(a[0]);
    for (int i = 1; i < len; i++)
    {        
        temp = a[i] + carry;
        res.push_back(ten_left(temp));
        carry = ten_one(temp);
    }
    while(carry > 0)
    {
        res.push_back(ten_left(carry));
        carry = ten_one(carry);
    }
    return res;
}

vector<long long> mul_func(vector<int> a, int b)
{
    int sizea = a.size();
    vector<long long> res;
    for (int i = 0; i < sizea; i++)
    {
        res.push_back(1LL * a[i] * b);
    }
    return res;
}

vector<long long> sum_func(vector<int> a, vector<int> b)
{
    int sizea = a.size();
    int sizeb = b.size();
    vector<long long> res;
    int max_size = max(sizea, sizeb);
    a.resize(max_size, 0);
    b.resize(max_size, 0);
    for (int i = 0; i < max_size; i++)
    {
        res.push_back(1LL * a[i] + b[i]);
    }
    return res;
}

void output(vector<int> a)
{
    int len = a.size() - 1;
    int zero_start = 0;
    for (int i = len; i >= 0; i--)
    {
        if (a[i] != 0)
        {
            zero_start = 1;
        }
        if (zero_start == 1)
        {
            cout << a[i];
        }
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> flo = {1};
    vector<int> all = {1};

    for (int i = 2; i <= n; i++)
    {
        vector<int> temp = all;
        vector<long long> mul_res = mul_func(flo, i);
        flo = trans_to_num(mul_res);

        vector<long long> sum_res = sum_func(flo, temp);
        all = trans_to_num(sum_res);
    }

    output(all);
    return 0;
}