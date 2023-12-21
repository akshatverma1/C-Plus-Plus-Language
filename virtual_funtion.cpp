#include<iostream>
using namespace std;
class base{
    public :
        int a;
        virtual void show(){
            cout<<"Show Invoked"<<endl;
}
};

class dervied : public base{
    public :
        int b;
        void show/*showw*/(){
            cout<<"Dervied Show Invoked"<<endl;
            }
};
class derived1 : public base{
    public :
        int b;
        void show/*showw*/(){
            cout<<"Dervied1 Show Invoked"<<endl;
            }
};

int main(){
    base *bptr;
    dervied d;
    derived1 s;
    bptr = &d;
    bptr->show();
    return 0;
}