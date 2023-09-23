#include<iostream>

using namespace std;

int main(){
	//*****Control_Structures*****
	
	//if-else_if-else
	
	int age,ages;
	cout<<"Enter your age:"<<endl;
	cin>>age;
	
	if (age<18){
		cout<<"You are a minor"<<endl;
	}
	else if ((age>=18) && (age<=99)){
		cout<<"You are an adult"<<endl;
	}
	else if(age>99){
		cout<<"You are too old and a liability on this earth \nYou should be dead by now!!"<<endl;
		
	}
	
	//switch case
	
	switch(ages){
		case 2:
			cout<<"You are a minor"<<endl;
			break;
			
		case 18:
			cout<<"You are an adult"<<endl;
			break;
			
		case 100:
			cout<<"You are too old and a liability on this earth \nYou should be dead by now!!"<<endl;
			break;
			
		default:
			cout<<"Wrong choice"<<endl;
			break;
	}
	
	
	return 0;
}
