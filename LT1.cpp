#include<iostream>
using namespace std;
int main() 
{
    cout<<"Waleed Waseem"<<endl;
    cout<<"Sap Id:72450"<<endl;
    int ageyears, agemonths, agedays;
    cout<<"Please enter your age in years:";
    cin>>ageyears;
    agemonths = ageyears * 12;
    agedays = ageyears * 365;
    cout<<"Your age in Months:"<<agemonths<<endl;
    cout<<"Your age in Days:"<<agedays<<endl;
    return 0;
}
