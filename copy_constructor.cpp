#include <iostream>
using namespace std;
class akshat
{
private:
    int a=0;

public:
    akshat(){
        cout << "Default Constructor" << endl;
    };
    akshat(int y){
        a = y;
        cout << "Parametized constructor invoked" << endl;
    }
    akshat (akshat &obj){
        cout<<"Copy Constructor Invoked"<<endl;
        a = obj.a;
    }
    void show(){
        cout << "Show Constructor Invoked " << a<<endl;
    }
};
int main()
{
    akshat x,z(9);
    x.show();
    //y.show();
    z.show();
    akshat q(x);
    q.show();
    return 0;
}