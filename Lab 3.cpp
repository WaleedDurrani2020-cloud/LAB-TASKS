#include<iostream>
using namespace std;
int main()
{
    cout<<"Waleed Waseem";
    cout<<"Sap Id:72450";
    float H;
    cout<<"\nEnter the time duration in Hours:";
    cin>>H;
    float minutes = H*60;
    float seconds = minutes*60;
    cout<<"\nTime duration in minutes is:"<<minutes;
    cout<<"\nTime duration in seconds is:"<<seconds;
    return 0;
}
