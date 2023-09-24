#include<iostream>

using namespace std;

int main(){
	
	//for loop for(initialization; condition; updation){}
	int j=1, k=1, n;
	cout<<"Enter value of n:"<<endl;
	cin>>n;
		
	for(int i=1; i<=n; i++){
		cout<<i<<endl;
	}
	
	cout<<"********************"<<endl;
	
	//while loop while(condition){}
	while(j<=n){
		cout<<j<<endl;
		j++;
	}
	
	cout<<"********************"<<endl;
	
	//do-while loop do{}while(condition);
	do{
		cout<<k<<endl;
		k++;
	}while(k<=n);
	
	
	return 0;
}
