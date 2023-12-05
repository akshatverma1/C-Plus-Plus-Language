#include<iostream>
using namespace std;
class student{
private:
char name[30];
int age;
public:
void getdata(); //function declaration
void display(); //function declaration
};
void student :: getdata(){//function outside the class
    cout <<"enter name"<<endl;
    cin >> name;
    cout<<endl;
    cout<<"Enter age"<<endl;
    cin >> age;
}
// function outside the class
void student :: display(){
    cout <<"\n"<<name<<endl;
    cout<<age;
}
int main (){
    //object declaration
     student p;
     p.getdata();
     p.display();
    return 0;
}