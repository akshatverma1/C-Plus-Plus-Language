#include<iostream>
using namespace std;
class base{
    public :
        int a;
        void show(){
            cout<<"Show Invoked"<<endl;
}
};

class dervied : public base{
    public :
        int b;
        void show(){
            cout<<"Dervied Show Invoked"<<endl;
            }
};

int main(){
    base b;
    dervied d;
    base *bptr = &d;//ligal
    dervied *dptr = &d;
    //bptr->showw();//illgal 
    //bptr->b=44;//illegal
    dptr->show();
    dptr->a=7687;
    dptr->b=786;
    //dptr->showw();
    
    
        return 0;
}