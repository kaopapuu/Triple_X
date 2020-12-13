#include <iostream>

int main()
{
    // print welcome messages to terminal
    std::cout << "You are a secret agent breaking into a secure server room....";
    std::cout << std::endl;
    std::cout << "You need to enter the correct code to continue...";

    // Declare 3 number code
    const int Code_A = 2;
    const int Code_B = 4;
    const int Code_C = 6;

    const int CodeSum = Code_A + Code_B + Code_C;
    const int CodeProduct = Code_A * Code_B * Code_C;

    //print CodeSum CodeProduct to the terminal
    std::cout << std::endl;
    std::cout << "+ There are 3 number in code" << std::endl;
    std::cout << "+ The codes add-up to: " << CodeSum << std::endl;
    std::cout << "+ The codes multiply to give "<< CodeProduct << std::endl;

    return 0;
}