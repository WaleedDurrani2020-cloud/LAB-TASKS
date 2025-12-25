#include<iostream>
using namespace std;
int main()
{ 
    cout<<"Waleed Waseem";
    cout<<"Sap Id:72450";
    float a,b,c,d,e;
    cout<<"Enter the marks in Maths:"<<a<<endl;
    cin>>a;
    cout<<"Enter marks in English:"<<b<<endl;
    cin>>b;
    cout<<"Enter maarks in Physics:"<<c<<endl;
    cin>>c;
    cout<<"Enter marks in Urdu:"<<d<<endl;
    cin>>d;
    cout<<"Enter marks in Computer:"<<e<<endl;
    cin>>e;
    float TM = a+b+c+d+e;
    float PA = (TM/500)*100;
    cout<<"The Total Marks are:"<<TM<<endl;
    cout<<"The Percentage is:"<<PA<<endl;
    return 0;
} 
