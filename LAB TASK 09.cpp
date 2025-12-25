#include<iostream>
using namespace std;
int sum(int y,int z);
int subtract(int y,int z);
int multiply(int y,int z);
int division(int y,int z);
int power(int y,int z);
int main()
{
	cout<<"------------- MENU FOR ARITHEMATIC OPERATIONS ------------"<<endl;
	cout<<"1. ADDITION"<<endl;
	cout<<"2. SUBTRACTION"<<endl;
	cout<<"3. MULTIPLICATION"<<endl;
	cout<<"4. DIVISION"<<endl;
	cout<<"5. POWER"<<endl;
	int choice,a,y,z;
	cout<<"Please enter your choice from above given menu:";
	cin>>choice;
	cout<<"Enter a number:";
	cin>>y;
	cout<<"Enter a number:";
	cin>>z;
	switch (choice)
	{
	case 1: 
	a= sum(y,z);
	cout<<"ADDITION="<<a;
	break;
	case 2:
	a=subtract(y,z);
	cout<<"SUBTRACTION="<<a;
	break;
	case 3:
	a=multiply(y,z);
	cout<<"MULTIPLICATION="<<a;
	break;
	case 4:
	a=division(y,z);
	cout<<"DIVISION="<<a;
	break;
	case 5:
	a=power(y,z);
	cout<<"POWER="<<a;
	break;
}
	return 0;
}
int sum(int y,int z)
{
	int r;
	r=y+z;
	return (r);
}
int subtract(int y,int z)
{
	int s;
	s=y-z;
	return(s);
}
int multiply(int y,int z)
{
	int t;
	t=y*z;
	return(t);
}
int division(int y,int z)
{
	if(z==0)
	{
	cout<<"ERROR"<<endl;
	}
	int u;
	u=y/z;
	return(u);
}
int power(int y,int z)
{
	int p=1;
	for(int i=1;i<=z;i++)
	{
	p*=y;
	}
	return(p);
}
