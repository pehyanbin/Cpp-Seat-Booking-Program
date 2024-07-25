#include <iostream>
#include <string>
using namespace std;

int main() {
    bool seats[6][4] = {
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0},
    {0, 0, 0, 0}
    };

    int row, col;
    char choice;
    char restart; 

    while (true) {
        cout << "--------------------------------------------------" << endl;
        cout << "Check your seat vacancy here. \n\n" << endl;

        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 4; j++) {
                cout << seats[i][j] << " ";
            }
            cout << endl;
        }

        cout << "\n\n" << endl;

        while (true) {
            cout << "Enter the row number: " << endl;
            cin >> row;

            if (row < 0 || row >= 6) {
                cout << "Invalid row number. Please try again." << endl;
                continue;
            }
            else {
                break;
            }
        }



        while (true) {
            cout << "Enter the column number: " << endl;
            cin >> col;

            if (col < 0 || col >= 4) {
                cout << "Invalid column number. Please try again." << endl;
                continue;
            }
            else {
                break;
            }
        }


        cout << "==================================================" << endl;

        for (int i = 0; i < 6; i++) {
            for (int j = 0; j < 4; j++) {
                cout << seats[i][j] << " ";
            }
            cout << endl;
        }

        if (seats[row][col] == 0) {
            cout << "\n\nAvailable" << endl;

            cout << "\n\nBook this seat? (enter \'y\' to book seat, any character to deny)" << endl;
            cin >> choice;

            if (choice == 'y') {
                seats[row][col] = 1;
                cout << "Seat booked\n\n" << endl;
            }
            else {
                break; 
            }

        }
        else {
            cout << "\n\nOccupied\n\n" << endl;
            cout << "Restart ? ( y for yes, others characters for no.  ) " << endl; 
            cin >> restart; 

            if (restart != 'y' || restart != 'Y') {
                break;
            }
        }

    }



    return 0;
}