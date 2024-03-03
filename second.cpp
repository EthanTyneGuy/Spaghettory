#include <iostream>

using namespace std;

int main() {
    char input;
    int leftHanders = 0;
    int rightHanders = 0;

    //loopedy poopedy until user enters x
    do {
        cout << "Enter an L if you are left-handed, an R if you are right-handed or X to quit: ";
        cin >> input;

        if (input == 'L') {
            leftHanders++;
        } 
        else if (input == 'l') {
            leftHanders++;
        } 
        else if (input == 'R') {
            rightHanders++;
        }
        else if (input == 'r') {
            rightHanders++;
        }
        else if (input != 'X') {
            cout << "Invalid input. Please enter L, R, or X." << endl;
        }
    } while (input != 'X');

    // Output the counts
    cout << "Number of left-handed students: " << leftHanders << endl;
    cout << "Number of right-handed students: " << rightHanders << endl;

    return 0;
}