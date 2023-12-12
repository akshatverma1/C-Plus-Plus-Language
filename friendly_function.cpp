#include<iostream>
using namespace std;
class akshat{
    private :
        int a,b;
        static int count;
    public:
        int setdata(int x,int y){
            a = x;
            b = y;
        }
        int print(){
            count++;
            cout<<count<<" "<<"This is a Value of the a = "<<a<<" & b = "<<b<<endl;
        }
        friend akshat arr(akshat e,akshat u);        
};  
        int akshat :: count;
        akshat arr(akshat e,akshat u){
            akshat y3;            
            int w = e.a + u.a;
            int d = e.b + u.b;
            y3.setdata(w,d);
            return y3;
        } 
int main(){
    akshat h1,h2,h4;
    h1.setdata(2,4);
    h1.print();
    h2.setdata(3,5);
    h2.print();
    //h4.arr(h1,h2);error
    h4 = arr(h1,h2);
    h4.print();
    return 0;
}