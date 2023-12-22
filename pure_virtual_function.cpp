#include<iostream>
using namespace std;
class base{
    public:
        virtual void deriied(){
            cout<<"Base invoked"<<endl;
        };
};
class derived : public base{
    public :
        void deriied(){
        cout<<"Derivied function call"<<endl;   
        }    
};
class derived1 : public base{
    public :
        void deriied(){
            cout<<"Derivied2 function call"<<endl;   
        }
};
int main(){
    derived r;
    derived1 e;
    base *ptr[2];
    ptr[0] = &r;
    ptr[1] = &e;
    ptr[0]->deriied();
    ptr[1]->deriied();
    return 0;
}