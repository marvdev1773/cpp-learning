#include <iostream>

double getNumber()
{
std::cout << "Enter floating number: \n";
double x{};
std::cin >> x;

return x;

}

char getSymbol()
{
    std::cout << "Enter one of the mathematical symbols: +, -, *, or / \n";
    char oper{};
    std::cin >> oper;

    return oper;
}

void computeval(double x, char oper, double y)
{
    double val{};

    if (oper == '+')
        val = x + y;
    else if (oper == '-')
        val = x - y;
    else if (oper == '*')
        val = x * y;
    else if (oper == '/')
        val = x / y;
    else
        return; //early return if user enters an operation that is not within the provided range.

    std::cout << x << ' ' << oper << ' ' << y << "is: " << val << '\n';
}

int main()
{
    double x { getNumber() };
    double y { getNumber() };

    char oper { getSymbol() };

    computeval(x, oper, y);

    return 0;
}