#include<iostream>
using namespace std;

int n1,n2;

int sum(){
	cout<<"Your sum is:"<<(n1+n2)<<endl;
}

int sub(){
	cout<<"Substraction is:"<<(n1-n2)<<endl;
}

int multiply(){
	if(n2==0){
		cout<<"You can't divide by zero \nEnter another number"<<endl;
}
	cout<<"Multiplication is:"<<(n1*n2)<<endl;
}

float div(){
	if(n2==0){
		cout<<"You can't divide by zero \nEnter another number"<<endl;		
	}
	else{
	cout<<"Division is:"<<(n1/n2)<<endl;
}
}
int main(){
	cout<<"Enter number 1 and number 2:"<<endl;
	cin>>n1>>n2;
	
	int ch;
	cout<<"Enter your choice: \n1.Sum \n2.Substraction \n3.Multiplication \n4.Division"<<endl;
	cin>>ch;
	
	switch(ch){
		case 1:
			cout<<sum()<<endl;
			break;
		
		case 2:
			cout<<sub()<<endl;
			break;
		
		case 3:
			cout<<multiply()<<endl;
			break;
		
		case 4:
			cout<<div()<<endl;
			break;
		
		default:
            cout << "Invalid choice." << endl;
            break;
			
	}
	return 0;
}

