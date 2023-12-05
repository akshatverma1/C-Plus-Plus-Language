#include<iostream>
#include<iomanip>
using namespace std;
int lakshya(int w,int r);
int akshat(int *s,int *p);
int ref(int &q,int &u);
int main() {
	system("cls");
	int a=3,b=5;
	//int &q = a;
	//int &u = b;
	lakshya(a,b);
	akshat(&a,&b);
	cout<<"Changed values  "<<a<<setw(3)<<b<<endl;
	ref(a,b);
	return 0;
}
//call by value
int lakshya(int w,int r){
	cout<<"Call By Value"<<endl;
	cout<<w<<setw(3)<<r<<endl;
}
//call by address
int akshat(int *s,int *p){
	cout<<"Call By Address"<<endl;//hexadecimal question...?
	cout<<"Values"<<"\t"<<s<<"\t"<<p<<endl;
	cout<<"Values"<<"\t"<<*s<<"\t"<<*p<<endl;
	*s = 12,*p=33;	
	cout<<"Values"<<"\t"<<*s<<"\t"<<*p<<endl;
	return 0;
}
//call by reference
int ref(int &q,int &u){
	cout<<"Call By Reference"<<endl;
	cout<<"Values"<<"\t"<<q<<"\t"<<u<<endl;
    cout<<"Values"<<"\t"<<&q<<"\t"<<&u<<endl;
	return 0;
}
