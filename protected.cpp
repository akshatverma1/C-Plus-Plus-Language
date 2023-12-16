#include<iostream>
using namespace std;
class base{
    protected :
    int a=1;
    void show(){
    cout<<"a = "<<a<<" b ="<<b<<endl;
    }
    public : 
    int b=2;
    void getdata(){
    cout<<"a = "<<a<<" b ="<<b<<endl;
    }
};
class derived : public base {
    public :
    void setdata(){
    cout<<"a = "<<a<<" bb ="<<b<<endl;
    show();
    }
};
int main(){
    derived d;
    base r;
    //d.show();
    d.setdata();
    return 0;
}