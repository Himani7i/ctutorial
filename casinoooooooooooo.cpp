#include <iostream>
using namespace std;

int main() {
    int number, num;
    cout << "Enter a random digit from 0 to 9" << endl;
    cin >> num;
    int randnum = (num * 5 + num * 2 + 35);

    cout << "Guess a number between 1 to 100\nYou have a total of 5 chances!" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << "Enter the number:" << endl;
        cin >> number;
        if (number == randnum)
         {
        cout << "Correct guess, YOU HAVE WON!!!" << endl;
        break;}
        else if (number > randnum) 
        {
            cout << "The number is too high. TRY AGAIN!!!" << endl;} 
    else{
            cout << "The number is too low. TRY AGAIN!!!" << endl;}
            cout << "You have " << 5 - i << " chances left!" << endl;
       }
     if (number != randnum) {
        cout << "Sorry, you've run out of chances. The correct number was: " << randnum << endl;
    }
    return 0;
}

