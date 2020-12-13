#include <iostream>

int main()
{
    // print welcome messages to terminal
    std::cout << "You are a secret agent breaking into a secure server room....";
    std::cout << std::endl;
    std::cout << "You need to enter the correct code to continue...";

    // Declare 3 number code
    const int a = 2;
    const int b = 4;
    const int c = 6;

    const int sum = a + b + c;
    const int product = a * b * c;

    //print sum and product to the terminal
    std::cout << std::endl;
    std::cout << "+ There are 3 number in code" << std::endl;
    std::cout << "+ The codes add-up to: " <<sum << std::endl;
    std::cout << "+ The codes multiply to give "<<product << std::endl;

    return 0;
}