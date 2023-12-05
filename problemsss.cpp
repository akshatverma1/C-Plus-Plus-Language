#include<iostream>
using namespace std;
int ref(int a,int b);
char ref(int a,char b);
char ref(int a,int b, char d);
int c,j;
int &retun(){   // Return By Reference
	return j; }
int main(){
     ref(1,2);
     ref(3,4);
     ref(5,6,'g');
     retun()=22;
     cout<<j;
	return 0;
}
int ref(int a,int b)
{
	cout<<"Values"<<a<<b<<endl;
	return 0;
}
char ref(int a,char b){
	cout<<"second function"<<a<<"\t"<<b<<endl;
	return 0;
}
char ref(int a,int b,char d){
	cout<<a<<"\t"<<b<<"\t"<<d<<endl;
}
