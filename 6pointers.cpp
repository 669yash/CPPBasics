#include<iostream>
using namespace std;

int main(){
	
	//pointer: it is a datatype which stores addressess of another datatype
	
	int a;
	cout<<"Enter value of a"<<endl;
	cin>>a;
	
	int* b=&a;  
	
	cout<<b<<endl; 
	//&-->(address of) operator
	cout<<&a<<endl; 
	//*-->(value at) dereference operator
	cout<<*b<<endl;
	
	//pointer to pointer 
	int** c=&b;
	
	cout<<c<<endl;
	
	return 0;
}
