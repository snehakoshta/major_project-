#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
using namespace std;

const int MAX_ROWS = 10;
const int MAX_COLS = 6;

class Flight {
private:
    vector<vector<bool>> seats;

public:
    Flight() {
        // Initialize all seats as available
        seats.resize(MAX_ROWS, vector<bool>(MAX_COLS, true));
    }

    // Function to book a seat
    bool bookSeat(int row, int col) {
        if (row < 1 || row > MAX_ROWS || col < 1 || col > MAX_COLS) {
            cout << "Invalid seat selection." << endl;
            return false;
        }

        if (seats[row - 1][col - 1]) {
            seats[row - 1][col - 1] = false;
            cout << "Seat " << row << char('A' + col - 1) << " booked successfully." << endl;
            return true;
        } else {
            cout << "Seat " << row << char('A' + col - 1) << " is already booked." << endl;
            return false;
        }
    }

    // Function to display seating arrangement
    void displaySeatingArrangement() {
        cout << "Seating Arrangement:" << endl;
        cout << setw(5) << " ";
        for (int i = 0; i < MAX_COLS; ++i) {
            cout << char('A' + i) << setw(5);
        }
        cout << endl;
        for (int i = 0; i < MAX_ROWS; ++i) {
            cout << setw(3) << i + 1;
            for (int j = 0; j < MAX_COLS; ++j) {
                cout << setw(5) << (seats[i][j] ? "O" : "X");
            }
            cout << endl;
        }
    }
};

int main() {
    Flight flight;

    int choice;
    do {
        cout << "\nMenu:\n";
        cout << "1. Book a seat\n";
        cout << "2. View seating arrangement\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int row;
                char col;
                cout << "Enter row number (1-" << MAX_ROWS << "): ";
                cin >> row;
                cout << "Enter column letter (A-F): ";
                cin >> col;
                flight.bookSeat(row, col - 'A' + 1);
                break;
            }
            case 2:
                flight.displaySeatingArrangement();
                break;
            case 3:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 3);

    return 0;
}
