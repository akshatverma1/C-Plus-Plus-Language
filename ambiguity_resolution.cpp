#include<iostream>
using namespace std;
class base1{
    public :
    void show(){
        cout <<"Show bas1 invoked"<<endl;
    }
};
class base2{
    public :
    void show(){
        cout <<"show base2 invoked"<<endl;
    }
};
class derived : public base1 ,public base2{
    public :
    void show(){
        base1::show();
    }
};
int main(){
    derived o;
    o.show();
    return 0;
}