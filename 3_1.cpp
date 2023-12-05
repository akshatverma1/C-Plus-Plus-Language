//write a function using reference variable as arguments to swap the values of the pair integers.
#include<iostream>
#include<iomanip>
using namespace std;
int ref(int a,int b);
int c;
int main(){
	ref(1,2);
	return 0;
}
int ref(int a,int b)
{
	cout<<"Values"<<a<<setw(3)<<b<<endl;
	c =a;
	a=b;
	b = c;
	cout <<a<<setw(3)<<b;
	
	return 0;
}
