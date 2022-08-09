#include <iostream>
#include <string>
#include <vector>

//Reversing Change
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

int main()
{

multiplyandlog(5,4);



    return 0;
}