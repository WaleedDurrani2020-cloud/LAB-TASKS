#include <iostream>
using namespace std;

int main() {
    char grade;
    cout << "Enter grade";
    cin >> grade;

    switch (grade) {
        case 'A': case 'a':
            cout << "Your test score is >= 90";
            break;
        case 'B':case 'b':
            cout << "Your test score is 80 - 89";
            break;
        case 'C':case 'c':
            cout << "Your test score is 70 - 79";
            break;
        case 'D':case 'd':
            cout << "Your test score is 60 - 69";
            break;
        case 'F':case 'f':
            cout << "Your test score is < 60";
            break;
        default:
            cout << "Invalid grade";
            break;
    }

    return 0;
}
