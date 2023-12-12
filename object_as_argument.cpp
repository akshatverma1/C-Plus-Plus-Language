#include<iostream>
using namespace std;
class akshat{
    private :
        int a;
        int b;
    public :
        void sum(int x,int y){
            a=x;
            b=y;
        }
        void sumarr( akshat w,akshat q){
            a = w.a+q.a;
            b = w.b+q.b;
        }        
        void print(){
            cout<<"The value of a&b  "<<a<<"+"<<b<<endl;
        }
};
int main(){
    akshat a1,a2,a3;
    a1.sum(1,2);
    a1.print();
    a2.sum(2,3);
    a2.print();

    a3.sumarr(a1,a2);
    a3.print();
    return 0;
}