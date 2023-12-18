#include<iostream>
using namespace std;
class base{
    public :
        base(){}
        base(int r,int y){
            cout<<"Base class paramized constructor invoked "<<r<<" "<<y<<endl;
        }
};
class derived1 : public base{
    public :
    derived1(){}
        derived1(int u,int g){
            cout<<"Derived1 class paramized constructor invoked "<<u<<" "<<g<<endl;
        }
};
class derived2 : public derived1{
    public :
        derived2(int n,int d){
            cout<<"Derived2 class paramized constructor invoked "<<n<<" "<<d<<endl;
        }
        derived2(int a1,int a2,int a3,int a4,int a5,int a6): derived1(a3,a4){
            base(a5,a6);
            derived2(a1,a2);
            cout<<"Multiple Constructor Invoked"<<endl;
}
};
int main(){
    derived2 f(1,2,3,4,5,6);
    return 0;
}