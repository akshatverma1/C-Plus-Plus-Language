#include<iostream>
using namespace std;
class akshat{
    int a,b;
    public :
        akshat(void);
        akshat(int,int);
        int print(){
            cout<<a<<" & "<<b;
            cout<<"\n";
        }
};
akshat :: akshat(void){ //default constructor
    a=9;
    b=6;
}
akshat :: akshat(int x,int y){
    a=x;
    b=y;
}
int main(){
    //akshat t(3,4);
    //akshat t;
    //t.print();
    akshat u;
    u.print();
    //t.print();
    return 0;
}