#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
   
    srand(time(0));
    
    int secretNumber = rand() % 1000 + 1;
    int count=0;
    int userGuess;

    cout << "Guess the number (between 1 and 1000): ";

    while (true) {
        cin >> userGuess;

        if (userGuess < secretNumber) {
            cout << "Too low. Try again: ";
            count++;
        } else if (userGuess > secretNumber) {
            cout << "Too high. Try again: ";
            count++;
        } else {
            cout << "Congratulations! You guessed the correct number in "<<count<<" attempts"<<endl;
            break;
        }
    }

    return 0;
}
