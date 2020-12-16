#include <iostream>
#include <ctime>

void PrintIntroduction(int Difficlty)
{
     // print welcome messages to terminal
    std::cout << "\n\nYou are a secret agent breaking into a level " << Difficlty ;
    std::cout << "secure server room....\n You need to enter the correct code to continue...\n\n";
}

bool PlayGame(int Difficlty)
{
    PrintIntroduction(Difficlty);

    // Declare 3 number code
    const int Code_A = rand() % Difficlty + Difficlty;
    const int Code_B = rand() % Difficlty + Difficlty;
    const int Code_C = rand() % Difficlty + Difficlty;

    const int CodeSum = Code_A + Code_B + Code_C;
    const int CodeProduct = Code_A * Code_B * Code_C;

    //print CodeSum CodeProduct to the terminal
    std::cout << "+ There are 3 number in code";
    std::cout << "\n+ The codes add-up to: " << CodeSum;
    std::cout << "\n+ The codes multiply to give "<< CodeProduct << std::endl;

    //input int
    int GuessA,GuessB,GuessC;
    std::cin >> GuessA >> GuessB >> GuessC ;
    
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    //Check if the player guess is correct 
    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        std::cout << "\n *** Well done agent! You have extracted a file! Keep going! ***";
        return true;
    }
    else
    {
        std::cout << "\n *** You entered the wrong code! Careful agent! Try again ***";
        return false;
    }
}

int main()
{
    srand(time(NULL));
    int LevelDifficlty = 1;
    int const MaxLevel = 5;
    while (LevelDifficlty <= MaxLevel)
    {
        bool blevelCompleted = PlayGame(LevelDifficlty);
        std::cin.clear(); //Clears any Errors
        std::cin.ignore(); //Discards the buffer

        if (blevelCompleted)
        {
            ++LevelDifficlty;
        }
    }
    
    std::cout << "\n *** Great work agent! You get all the files! Now get out of there! *** \n";
    return 0;
}