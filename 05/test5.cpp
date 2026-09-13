# include<iostream>
# include<cmath>

int main()
{
    float a;
    std::cout << "please input a number: " << std::endl;
    std::cin >> a;
    std::cout << sqrt(a) << std::endl;
 

    double c, b, n;
    std::cout << "please input two numbers: " << std::endl;
    std::cin >> c >> b;
        

    n = pow (c, b);
    std::cout << n << std::endl;

    return 0;

}