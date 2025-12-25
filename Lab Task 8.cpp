#include <iostream>
#include <string>
using namespace std;

const string ADMIN_PASSWORD = "11223344";
const int MAX_ATTEMPTS = 3;

void adminPanel();
void userPanel();
void adminMenu();
void userMenu();

int main() {
    int main_choice;
    do {
        cout << "---------- MAIN PROGRAM MENU ---------" << endl;
        cout << "1. Admin Panel" << endl;
        cout << "2. User Panel" << endl;
        cout << "3. Exit Program" << endl;
        cout << "Enter choice: ";
        cin >> main_choice;

        switch (main_choice) {
        case 1:
            adminPanel();
            break;
        case 2:
            userPanel();
            break;
        case 3:
            cout << endl << "Exiting the program. Goodbye!" << endl << endl;
            break;
        default:
            cout << endl << "Invalid choice. Please enter 1, 2, or 3." << endl << endl;
            break;
        }
    } while (main_choice != 3);

    return 0;
}

void adminMenu() {
    int adChoice;
    do {
        cout << endl << "--- ADMIN TASKS MENU ---" << endl;
        cout << "1. View Database" << endl;
        cout << "2. Change Settings" << endl;
        cout << "3. Return to Main Menu" << endl;
        cout << "Enter task choice: ";
        cin >> adChoice;

        switch (adChoice) {
        case 1:
            cout << " Displaying secret database info " << endl;
            break;
        case 2:
            cout << " Settings have been changed." << endl;
            break;
        case 3:
            cout << endl << " task complete. " << endl;
            break;
        default:
            cout << endl << "Invalid choice" << endl;
            break;
        }
    } while (adChoice != 3);
}

void adminPanel() {
    string input_password;
    int attempts = 0;
    cout << endl << "--- ADMIN LOGIN REQUIRED ---" << endl;

    while (attempts < MAX_ATTEMPTS) {
        cout << "Enter Password (Attempt " << attempts + 1
             << " of " << MAX_ATTEMPTS << "): ";
        cin >> input_password;

        if (input_password == ADMIN_PASSWORD) {
            cout << endl << "Password Correct! Access Granted." << endl;
            adminMenu();
            return;
        } else {
            attempts++;
            cout << "Incorrect Password." << endl;
        }
    }
    cout << endl
         << "*** ACCESS DENIED *** Maximum login attempts failed. Returning to Main Menu."
         << endl;
}

void userMenu() {
    int userChoice;
    do {
        cout << endl << "--- USER SERVICES MENU ---" << endl;
        cout << "1. Check Status" << endl;
        cout << "2. Submit Request" << endl;
        cout << "3. Return to Main Menu" << endl;
        cout << "Enter service choice: ";
        cin >> userChoice;

        switch (userChoice) {
        case 1:
            cout << "[User Task] Your request is pending approval." << endl;
            break;
        case 2:
            cout << "[User Task] Your request has been submitted." << endl;
            break;
        case 3:
            cout << endl << "Returning to the Main Menu." << endl;
            break;
        default:
            cout << endl << "Invalid service choice. Try again." << endl;
            break;
        }
    } while (userChoice != 3);
}

void userPanel() {
    cout << endl << "--- Welcome, User! ---" << endl;
    userMenu();
}
