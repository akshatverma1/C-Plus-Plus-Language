#include<iostream>
using namespace std;
int add(int a,int b);
int add(int a,int b,int c);
float add(double x,double y);
float add(double x,float y);
float add(int s,double e,float t);
int main() {
	add(1,2);
	add(1,2,3);
	add(1.233,13.22);
	add(1.2,2.3);
	add(2,234.2,23.3);
	return 0;
}
int add(int a,int b){//3
	cout<<a+b<<endl;
return 0;	
}
int add(int a,int b,int c){//6
	cout << a+b+c<<endl;
	return 0;
}
float add(double x,double y){//14.453
	cout<<x+y<<endl;
	return 0;
}
float add(double x,float y){//3.5
	cout << x+y<<endl;
	return 0;
}
float add(int s,double e,float t){//259.5
	cout << s+e+t;
	return 0;
}
