#include <iostream>
#include <math.h>  
using namespace std;

int main() {
    int choice;
    int a, b;
    double num1, num2;

     {
        cout << "1. Addition of two integers"<<endl;
        cout << "2. Subtraction of two integers"<<endl;
        cout << "3. Multiplication of two integers"<<endl;
        cout << "4. Division of two integers"<<endl;
        cout << "5. Addition of two Floating Point Numbers"<<endl;
        cout << "6. Subtraction of two Floating Point Numbers"<<endl;
        cout << "7. Multiplication of two Floating Point Numbers"<<endl;
        cout << "8. Division of two Floating Point Numbers"<<endl;
        cout << "9. Sine"<<endl;
        cout << "10. Cosine"<<endl;
        cout << "11. Tangent"<<endl;
        cout << "12. Square Root"<<endl;
        cout << "13. Square"<<endl;
        cout << "14. Cube"<<endl;
        cout << "15. Exit"<<endl;
 cout << "Enter your choice ";
        cin >> choice;
       
        switch (choice) {
            case 1:
                cout << "Enter two integers ";
                cin >> a,b;
                cout << "Result of a+b = " << a + b << endl;
                break;

            case 2:
                cout << "Enter two integers ";
                cin >> a,b;
                cout << "Result of a-b= " << a - b << endl;
                break;

            case 3:
                cout << "Enter two integers ";
                cin >> a,b;
                cout << "Result of a*b = " << a * b << endl;
                break;

            case 4:
                cout << "Enter two integers ";
                cin >> a,b;
                if (b != 0)
                    cout << "Result = a/b" << (a) / b << endl;
                else
                    cout << "Error Division by zero!"<<endl;
                break;

            case 5:
                cout << "Enter two floating point numbers ";
                cin >> num1,num2 ;
                cout << "Result =num1+num2 " << num1 + num2 << endl;
                break;

            case 6:
                cout << "Enter two floating point numbers ";
                cin >> num1,num2;
                cout << "Result =num1-num2 " << num1 -num2<< endl;
                break;

            case 7:
                cout << "Enter two floating point numbers ";
                cin >> num1,num2;
                cout << "Result of num1*num2 = " << num1 * num2 << endl;
                break;

            case 8:
                cout << "Enter two floating point numbers ";
                cin >> num1,num2;
                if (num2!= 0)
                    cout << "Result of num1/num2 = " << num1/num2 << endl;
                else
                    cout << "Error Division by zero"<<endl;
                break;

            case 9:
                cout << "Enter angle in degrees ";
                cin >> num1;
                cout << "Sine("  <<num1<<  ") = " << sin(num1 * M_PI / 180) << endl;
                break;

            case 10:
                cout << "Enter angle in degrees ";
                cin >> num1;
                cout << "Cosine(" << num1 << ") = " << cos(num1* M_PI / 180) << endl;
                break;

            case 11:
                cout << "Enter angle in degrees ";
                cin >> num1;
                cout << "Tangent("<<  num1 <<  ") = " << tan(num1 * M_PI / 180) << endl;
                break;

            case 12:
                cout << "Enter a number ";
                cin >> num1;
                if (num1 >= 0)
                    cout << "Square root of " << num1 << " = " << sqrt(num1) << endl;
                else
                    cout << "Error"<<endl;
                break;

            case 13:
                cout << "Enter a number ";
                cin >> num1;
                cout << "Square of " << num1 << " = " << num1 * num1 << endl;
                break;

            case 14:
                cout << "Enter a number ";
                cin >> num1;
                cout<< "Cube of " << num1 << " = " << num1 * num1 * num1 << endl;
                break;

            case 15:
                cout << "Exit" << endl;
                return 0;

            default:
                cout << "Invalid choice"<<endl;
        }
    }

    return 0;
}


