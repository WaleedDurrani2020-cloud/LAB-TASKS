#include<iostream>
using namespace std;
int main()
{
	int marks [10];
	int total=0;
	float average;
	
	cout<<"Enter the marks of ten students:-"<<endl;
	for(int i=0;i<10;i++)
	{
		cout<<"Enter marks of student"<<i+1<<":-";
		cin>>marks[i];
		total+=marks[i];
	}
	average=total/10;
	cout<<"Total marks of ten students are:-"<<total<<endl;
	cout<<"Average of total marks of ten students are:-"<<average<<endl; 
	return 0;
}
