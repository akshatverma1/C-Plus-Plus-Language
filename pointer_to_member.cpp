#include<iostream>
using namespace std;
class akshat{
    private :
    int a,b;
    public :
    void setdata(int x,int y){
        a=x;
        b=y;
    }
    void getdata(){
        cout<<a<<" & "<<b;
    }
};
int main(){
    akshat *ptr = new akshat;
    //akshat k;
    //akshat *ptr = &k;
    ptr->setdata(2,4);
    ptr->getdata();
    return 0;
}