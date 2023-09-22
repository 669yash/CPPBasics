#include<iostream>

using namespace std;

int c=45;

int main(){
	int a=5,b=10,c=8;
	
	cout<<"a+b="<<a+b<<endl;
	cout<<"c="<<c<<endl;
	cout<<"global c="<<::c<<endl; //:: is scope resolution operator
	
	//Reference variable ekk variable ko dusre me store karna
	float x=34.5;
	float y=x;
	
	cout<<"x"<<x<<endl;
	cout<<"y"<<y<<endl;
	
	//******Typecasting:Changing datatype of a variable******
	
	int p=54;
	float q=24.111;
	cout<<"p:"<<(float)p<<endl;
	cout<<"q:"<<(int)q<<endl;
	
	
return 0;
	
	
}
