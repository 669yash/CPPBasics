#include<iostream>

using namespace std;

int main(){
	int n;
	cout<<"Enter value of n:"<<endl;
	cin>>n;
	
	//break: if condition is true will come out of the loop
		
	for(int i=1; i<=n; i++){
		cout<<i<<endl;
		if(i==50){
			break;
		}
	}
	
	cout<<"****************"<<endl;
	
	//continue: if condition is true will skip that turn
	
	for(int j=1; j<=n; j++){
		if((j%2)!=0){
			continue;
		}
		cout<<j<<endl;
	}
		
	return 0;
}
