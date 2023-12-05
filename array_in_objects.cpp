#include<iostream>
#include<cstdio>
using namespace std;
class student{
	public:
	char name[100];
	int age;
	bool gender; 		
};
int main(){
	int b;
	cout<<"How Many Student Data Your Are Enter"<<endl;
	cin>>b;
	b++;
	student a[b];
	for(int i=1;i<b;i++){
		cout<<"Enter Your "<<i<<" Student Data"<<endl;
		cout<<"Enter Your Name"<<endl;
		gets(a[i].name);
		//cin>>a[i].name;
		cout<<endl;
		cout<<"Enter Your Age"<<endl;
		cin>>a[i].age;
		cout<<endl;
		cout<<"Enter Your Gender for Male = 1 & Female = 0"<<endl;
		cin>>a[i].gender;
		cout<<endl;
	}
	for (int j=1;j<b;j++){
		cout<<a[j].name<<endl;
		cout<<a[j].age<<endl;
		cout<<a[j].gender<<endl;
	}
/*student a;
a.name="Akshat";
a.age=19;
a.gender=1;
cout<<a.name<<endl;
cout<<a.age<<endl;
cout<<a.gender;*/
return 0;
}

