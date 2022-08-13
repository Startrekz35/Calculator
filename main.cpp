#include <iostream>
#include <string>
#include <vector>

//Test Part Two
int add(int x, int y) //Addition
{
    return x + y;
}

void addandlog(int x, int y)
{
int result = add(x, y);
std::cout << result << std::endl;
}


int subtraction(int x, int y) //Subtraction
{
    return x - y;
}

void subtractandlog(int x, int y)
{
int result = subtraction(x, y);
std::cout << result << std::endl;
}


int multiply(int x, int y)
{
    return x * y;
}

void multiplyandlog(int x, int y)
{
int result = multiply(x, y);
std::cout << result << std::endl;
}

int divide(int x, int y)
{
    return x / y;
}

void divideandlog(int x, int y)
{
int result = divide(x, y);
std::cout << result << std::endl;
}

int modulus(int x, int y)
{
    return x % y;
}

void modulusandlog(int x, int y)
{
int result = modulus(x, y);
std::cout << result << std::endl;
}


int main()
{

int options;

switch (options)
{
case 1:
    
    break;

default:
    break;
}



    return 0;
}