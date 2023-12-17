#include<iostream>
using namespace std;
class base{
    public :
        base(){
            cout<<"Base Class Constructor invoked"<<endl;
        }
        base(int y){
            cout<<"Base Class Paramized Constructor invoked"<<endl;
        }
        void setdata(){
            cout<<"Setdata invoked"<<endl;
        }
};
class derived1 : public base{
    public :
        derived1(){
            cout<<"Derived1 Class Constructor invoked"<<endl;
        }
        derived1(int u){
            cout<<"Derived1 Class Paramized Constructor invoked"<<endl;
        }
        void detdata(){
            cout<<"Detdata invoked"<<endl;
        }
};
class derived2 : public derived1{
    public :
        derived2(){}
        derived2(int e){
            cout<<"Derived2 Class Constructor invoked"<<endl;
        }
        void f(){
            cout<<"f"<<endl;
        }
};
int main(){
    derived2 s,d(2);
    //base d,c(2);
    return 0;
}