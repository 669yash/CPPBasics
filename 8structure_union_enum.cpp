#include<iostream>
using namespace std;

typedef struct emp{   //typedef will allow you to use the structure by using ep
	int empid;
	char designation;
	float salary;
}ep;

union book{
	char name;
	int bookcode;
	float price;
};

int main(){
	struct emp yash;
	ep pratik;
	
	yash.empid=101;
	yash.designation='investment banker';
	yash.salary=10000000;
	
	cout<<"Employee Id of Yash:"<<yash.empid<<endl;
	cout<<"Designation of Yash"<<yash.designation<<endl;
	cout<<"Salary of Yash"<<yash.salary<<endl;
	
	pratik.empid=102;
	pratik.designation='Web Devloper';
	pratik.salary=7000000;
	
	cout<<"Employee Id of Pratik:"<<pratik.empid<<endl;
	cout<<"Designation of Pratik"<<pratik.designation<<endl;
	cout<<"Salary of Pratik"<<pratik.salary<<endl;
	return 0;
}
