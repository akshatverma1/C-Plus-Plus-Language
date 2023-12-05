#include<iostream>
using namespace std;
class student{
	private : //private data members
	int marks;
	int grade;
	public :
		void lakshya();
		char name;
		int rollno;
		void aksha(){//public inside class data function
			int t = marks + grade;
			cout<<"Public inside class data function"<<endl;
			cout<<t<<endl;
		}
		void ouside_but_runinside(int c1,int d1){//Public Outside class data function but run and print value
		int y = c1+d1;
		cout<<"Public Outside class data function but run perform function and print value and this only for public data members"<<endl;	
		cout<<y<<endl;
		}
		void setdata(int a1,int b1);//Data members function for private data members
		void getdata(){
			cout<<"Data members function for private data members"<<endl;
		cout<<"Marks"<<"\t"<<marks<<endl;
		cout<<"Grade"<<"\t"<<grade<<endl;
	}
};
void student :: setdata(int a1,int b1){//Outside Data members function for private data members
	marks = a1;
	grade = b1;
	//cout<<marks;
}
void student :: lakshya(){
	cout<<marks;
}
int main() {
	
	student akshat;
	akshat.setdata(2,3);
	akshat.getdata();
	akshat.name='a';
	akshat.aksha();
	akshat.ouside_but_runinside(2,4);
	akshat.lakshya();
	return 0;
}
