#include<iostream>
using namespace std;
class akshat;
class lakshya{
    private :
        int id1;
    public :
        void setdata(int r){
            id1 = r;
        }
        void getdata(){
            cout<<"lakshya = "<<id1<<endl;
        }
        friend int dear(lakshya,akshat);        
};
class akshat{
    private :
        int id2;
    public :
        void setdata(int e){
            id2 = e;
        }
        void getdata(){
            cout<<"akshat = "<<id2<<endl;
        }
    friend int dear(lakshya ,akshat);
};
int dear(lakshya a1,akshat a2){
    int temp;
    temp = a1.id1;
    a1.id1 = a2.id2;
    a2.id2 = temp;
    return 0;
}
int main(){
    lakshya q;
    akshat e;
    q.setdata(20);
    q.getdata();
    e.setdata(90);
    e.getdata();
    dear(q,e);
    q.getdata();
    e.getdata();
    return 0;
}