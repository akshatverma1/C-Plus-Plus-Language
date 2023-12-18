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
class derived1{
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
class derived2 : public base,public derived1{
    public :
    int a;
        derived2(){
            cout<<"Derived2 Class Constructor invoked"<<endl;
        }
        derived2(int e){
            cout<<"Derived2 Class Pramized Constructor invoked"<<endl;
        }
        derived2(int a,int b,int c,int d): base(a),derived1(b){
                cout<<"multi constructopr invoked "<<a<<endl;
            }
        void f(){
            
        }
};
int main(){
    derived2 s(2,3,4,5);
    return 0;
}