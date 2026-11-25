#include <iostream>
using namespace std;

struct boxes
{
    int a, b, c;

    void getnum()
    {
        cin >> a >> b >> c;
    }

    void Mul2()
    {
        a *= 2;
        b *= 2;
        c *= 2;
    }



};


int main()
{
    boxes X, Y;

    X.getnum();
    Y.getnum();

    X.Mul2();
    Y.Mul2();

    printf("%d %d %d\n", X.a, X.b, X.c);

    if(X.a > Y.a) printf("X is bigger\n");
    else printf("X is not bigger\n");

    cout << X.b * Y.b << endl;

    boxes Z;
    Z.a = X.a + Y.a;
    Z.b = X.b + Y.b;
    Z.c = X.c + Y.c;

    printf("%d %d %d\n", Z.a, Z.b, Z.c);
    printf("%d %d %d\n", X.a - Y.a, X.b - Y.b, X.c - Y.c);
}