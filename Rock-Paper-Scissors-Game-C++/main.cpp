//
//  main.cpp
//  Rock-Paper-Scissors-Game-C++
//
//  Created by MEDLAO on 20/03/2024.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

using namespace std;

int main(int argc, const char * argv[])
{
    // rock beats scissors
    // scissors beats paper
    // paper beats rock
    
    srand((unsigned int) time(NULL)); // generate a random number and use the current time as a seed value
    int playerThrow = 0;
    int aiThrow = 0;
    bool draw = false;
    
    cout << "Welcome to Rock Paper Scissors Game !" << endl;
    
    do
    {
        cout << "Select your throw : " << endl;
        cout << "1) Rock" << endl;
        cout << "2) Paper" << endl;
        cout << "3) Scissors" << endl;
        cout << "Selection: ";
        cin >> playerThrow;
        
        cout << endl; // to separate the user input from the game output
        
        aiThrow = (rand() % 3) + 1;
        
        if (aiThrow == ROCK)
        {
            cout << "AI throws ROCK." << endl;
        }
        else if (aiThrow == PAPER)
        {
            cout << "AI throws PAPER." << endl;
        }
        else if (aiThrow == SCISSORS)
        {
            cout << "AI throws SCISSORS." << endl;
        }
        
        draw = false;
        
        if (playerThrow == aiThrow)
        {
            draw = true;
            cout << "Draw ! Play again !" << endl;
        }
        else if (playerThrow == ROCK && aiThrow == SCISSORS)
        {
            cout << "ROCK beats SCISSORS. YOU WIN !" << endl;
        }
        else if (playerThrow == ROCK && aiThrow == PAPER)
        {
            cout << "PAPER beats ROCK. YOU LOSE !" << endl;
        }
        else if (playerThrow == PAPER && aiThrow == ROCK)
        {
            cout << "PAPER beats ROCK. YOU WIN !" << endl;
        }
        else if (playerThrow == PAPER && aiThrow == SCISSORS)
        {
            cout << "SCISSORS beats PAPER. YOU LOSE !" << endl;
        }
        else if (playerThrow == SCISSORS && aiThrow == PAPER)
        {
            cout << "SCISSORS beats PAPER. YOU WIN !" << endl;
        }
        else if (playerThrow == SCISSORS && aiThrow == ROCK)
        {
            cout << "ROCK beats SCISSORS. YOU LOSE !" << endl;
        }
        
        cout << endl; // just in case the menu is presented to the menu again, in a case of a draw
        
    } while (draw);
    
    return 0;
}
