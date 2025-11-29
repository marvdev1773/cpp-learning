#include <iostream>

int main()
{
    //Ask the user to enter two integers
    std::cout << "Enter two integers: "; 
    //declaring the first integer variable
    double num1{};
    //store the first integer into num1 variable
    std::cin >> num1;
    //declaring the second integer variable
    double num2{};
    //store the second input into num2 variable
    std::cin >> num2;
    //Ask the user to choose an operation
    std::cout << "Which operation should be completed?\n"
              << "+, -, *, or /: "; //put the choices on the next line
    //store single character like '+' or '*'
    char oper{}; 
    std::cin >> oper; //read operation from the  user
    double result{}; //initialize result variable
    if (oper == '+')
    {
        result = num1 + num2;
    }
    else if (oper == '-')
    {
        result = num1 - num2;
    }
    else if (oper == '*')
    {
        result = num1 * num2; 
    }
    else if (oper == '/')
    {
        if (num2 == 0)
        {
            std::cout << "Error: division by zero\n";
            return 0;
        }    
        result = num1 / num2;
    }
    else
    {
        std::cout << "Unknown operation\n";
        return 0;
    }
    //return the result
    std::cout << "Result: "<< result << '\n';
    return 0;
}