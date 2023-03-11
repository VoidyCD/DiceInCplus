#include <iostream>
#include <cstdlib>
#include <conio.h>


using namespace std;


void RollDice() {
    int number;
    string cont;
    cout << "Pick a number from 1-6: ";
    cin >> number;


    if (number < 1 || number > 6 || isdigit(number)) {
        cout << endl << "You did not choose a number from 1-6, press Enter to continue" << endl;

        cont = "";
        if (cont.empty()) {
            getch();
            cin.clear();
            fflush(stdin);
            RollDice();
        }
    } else {
        short computerNumber = rand() % (6 - 1 + 1) + 1;
        if (computerNumber == number) {
            cout << "You rolled " << number << endl
            << "the computer rolled " << computerNumber << endl
            << "You Won!";
        }
        else {
            cout << "You rolled " << number << endl
                 << "the computer rolled " << computerNumber << endl
                 << "You lost!";
        }

    }
}

int main() {
    srand ( time(NULL) ); // VERY IMPORT, IF THIS ISN'T HERE THE PROGRAM WILL ALWAYS GENERATE THE SAME RANDOM NUMBER
    RollDice();

    return 0;
}
