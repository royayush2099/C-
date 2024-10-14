//taking input from user in c++//functions for input is cin
#include<iostream>
using namespace std;

int main(){
/*	int apples;
	cout<<"enter no. of apples\n";
	cin>>apples;
	cout<<"number of apples:"<<apples<<endl;*/
	int a,b;
	cout<<"enter two numbers:\n";
	cin>>a>>b;
	cout<<"the values of a:\n"<<a<<endl;
	cout<<"the values of b:\n"<<b<<endl;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"a and b after swaping:\n"<<a<<endl<<b<<endl;
	
	return 1;
	}

