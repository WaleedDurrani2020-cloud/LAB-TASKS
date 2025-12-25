#include<iostream>
using namespace std;
int main(){
	int totalseconds;
	cout<<"Enter totalseconds";
	cin >>totalseconds;
	float hours=totalseconds/3600;
	int minutes=totalseconds%3600/60;
	int seconds=totalseconds%60;
	cout<<"hours are"<<hours<<endl;
	cout<<"minutes are"<<minutes<<endl;
	cout<<"seconds are"<<seconds<<endl;
	return 0;
	
}
