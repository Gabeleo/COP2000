//Your name here
//COP2000.0xx (xx = your section number)
//Short description of what your project will do

#include<iostream>
#include <iomanip>
#include <string> 
#include <cstdlib>
using namespace std;

void seed();
int random();
void playGame(int computerNumber, int playerNumber, int playerCount, int compCount);
void compare(int computerNumber, int playerNumber, int playerCount, int compCount);
void determineWinner(int playerCount, int compCount);
void promptNum(int playerNumber);
void promptAgain();
void validateNum(int playerNumber);
void promptAgain();
void validateAgain(string input);

int main()
{
	using std::cout;
	using std::endl;
    using std::cin;

    int playerCount = 0;
    int compCount = 0;
    int playerNumber;
    int computerNumber;

    seed();
    playGame(computerNumber, playerNumber, playerCount, compCount);

	system("pause");
	return 0;
}

void seed() {
    srand((unsigned)time(0));
}

int random(int computerNumber){
    computerNumber = int(seed() % 10);
    return 0;
}

void playGame(int computerNumber, int playerNumber, int playerCount, int compCount){
    compare(computerNumber, playerNumber, playerCount, compCount);
    determineWinner(playerCount, compCount);
    promptNum(playerNumber);
    promptAgain();
}

void compare(int computerNumber, int playerNumber, int playerCount, int compCount ){
    if( playerNumber < computerNumber++ && playerNumber > (computerNumber - 1)){
        playerCount++;
    }
    else{
        compCount++;
    }
}

void determineWinner(int playerCount, int compCount){
    if( playerCount > 3){
        cout << "Game Over! Player Wins!" << endl << "Computer =" << compCount << "Player =" << playerCount;
        exit(0);
    }
    else if( compCount > 3){
        cout << "Game Over! Computer Wins!" << endl << "Computer =" << compCount << "Player =" << playerCount;
        exit(0);
    }
}

void promptNum(int playerNumber){
    cout << "I have a number between 1 and 10" << endl << "What's your guess? ";
    cin >> playerNumber;
    validateNum(playerNumber);

}

void validateNum(int playerNumber){
    if( playerNumber < 0 || playerNumber > 10 || playerNumber == 0 ){
        cout << "Inavlid input, try again: ";
    }
}

void promptAgain(){
    string input;

    cout << "Would you like to play again? (y = yes, n = no): ";
    cin >> input;
    validateAgain(input);
}

void validateAgain(string input){
    if( input == "Y" || input == "y"){

    }
    else if(input == "N" || input == "n" ){
        cout << "This was a great time, come back soon!";
    }
    else{
        cout << "input is invalid";
    }
}