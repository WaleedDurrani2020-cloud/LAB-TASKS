#include<iostream>
using namespace std;
int main()
{ 
    cout<<"Waleed Waseem";
    cout<<"Sap Id:72450";
    int Totaldays;
    cout<<"\nEnter total number of days:";
    cin>>Totaldays;
    int weeks = Totaldays/7;
    int remaindays = Totaldays%7;
    cout<<"The weeks are:"<<weeks;
    cout<<"The Remaining Days are:"<<remaindays;
    return 0;
}
     
