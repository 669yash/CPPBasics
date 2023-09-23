#include<iostream>
#include<iomanip> //header file for manipulators
using namespace std;

int main(){
	//Constants: can't change it's value later
	
	const int a=3;
	cout<<"Constant a="<<a<<endl;
	
	const char b='A';
	cout<<"Constant b="<<b<<endl;
	
	//a=4;  -->Now this will give error
	
	//Manipulators: setw
	int x=9,y=999,z=99999;
	
	cout<<"x without setw:"<<x<<endl;
	cout<<"y without setw:"<<y<<endl;
	cout<<"z without setw:"<<z<<endl;
	
	cout<<"x with setw:"<<setw(7)<<x<<endl;     //Where 7 is the width
	cout<<"y with setw:"<<setw(7)<<y<<endl;
	cout<<"z with setw:"<<setw(7)<<z<<endl;
	
	//Operator precedence
	int p=3*4+1-4+2/2;    //if same precedence see assosiativity --> here left to right
	cout<<"p="<<p<<endl; 
	

	return 0;
}
