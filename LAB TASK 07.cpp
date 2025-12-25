#include<iostream>
using namespace std;
int main()
    {
    int salary[6];
    cout << "Enter salaries of 6 employees:"<<endl;
    for (int i = 0; i < 6; i++) 
	{
        cout << "Salary of employee " << i + 1 << ":";
        cin >> salary[i];
    }
    cout << "Salaries you entered:"<<endl;
    for (int i = 0; i < 6; i++) 
	{
        cout << "Employee " << i + 1 << ":" << salary[i] << endl;
    }
	 return 0;
}
