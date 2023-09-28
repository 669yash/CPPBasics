#include<iostream>

using namespace std;

int main(){
	
	//array initialization type1
	int arr[3]={1,2,3};
	cout<<arr[0]<<endl;
	cout<<arr[1]<<endl;
	cout<<arr[2]<<endl;
	
	//array initialization type2
	int a[3];
	a[0]=23;
	a[1]=76;
	a[2]=78;
	a[3]=60;
	
	cout<<"Array a"<<endl;
	for(int i=0;i<=3;i++){
		cout<<a[i]<<endl;
	}
	
	arr[2]=69;   //you can change any element of array at any instance
	cout<<"Array arr"<<endl;
	for(int i=0;i<=2;i++){
		cout<<arr[i]<<endl;
	}
	
	//pointer of array
	int *p=a;
	
	cout<<"Array a[0]:"<<*p<<endl;
	cout<<"Array a[1]:"<<*(p+1)<<endl;
	cout<<"Array a[2]:"<<*(p+2)<<endl;
	cout<<"Array a[3]:"<<*(p+3)<<endl;
	
	int *q=arr;
	cout<<"Array arr[0]:"<<*q<<endl;
	cout<<"Array arr[1]:"<<*(q+1)<<endl;
	cout<<"Array arr[2]:"<<*(q+2)<<endl;
	
	return 0;
}
