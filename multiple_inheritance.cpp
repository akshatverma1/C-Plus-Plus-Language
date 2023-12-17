#include<iostream>
using namespace std;
class base{
    private : 
    int a = 7;
    public :
    int b = 47890;
    void setdata(){
        cout<<"Setdata Invoked"<<endl;
    }
};
class base1{
    private : 
    int o = 7;
    public :
    int p = 4;
    void getdata(){
        cout<<"getdata Invoked"<<endl;
    }
};
class derived : public base{
    private : 
    int h = 7;
    public :
    int f = 4;
    void detdata(){
        cout<<"getdata Invoked "<<b<<endl;
    }
};
int main(){
    derived s;
    s.detdata();
    return 0;
}