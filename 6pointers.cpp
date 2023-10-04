#include<iostream>
using namespace std;

int main(){
	
	//pointer: it is a datatype which stores addressess of another datatype
	
	int a, x;
	cout<<"Enter value of a: "<<endl;
	cin>>a;
	cout<<"Enter value of x: "<<endl;
	cin>>x;
	
	int* b=&a;  
	
	cout<<"b: "<<b<<endl; 
	//&-->(address of) operator
	cout<<"&b: "<<&a<<endl; 
	//*-->(value at) dereference operator
	cout<<"*b: "<<*b<<endl;
	
	//pointer to pointer 
	int** c=&b;
	
	cout<<"c: "<<c<<endl;
	
	//References
	int &ref=a;
	ref=80;
	
	cout<<"Ref: "<<ref<<endl;
	cout<<"&a: "<<&a<<endl;
	cout<<"&ref: "<<&ref<<endl;
	ref=x;
	
	cout<<"Ref: "<<ref<<endl;
	cout<<"a: "<<a<<endl;
	cout<<"x: "<<x<<endl;
	
	return 0;
}
