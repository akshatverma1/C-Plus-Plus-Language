#include<iostream>
using namespace std;
class student{
    private:
    int name;
    public :
        int d = 87;
        student(){
            cout<<"Defalt constructor call"<<endl;
        }
        student(int y){
            name = y;
            cout<<name<<endl;
            cout<<"d = "<<d<<endl;
        }
        void show(){
            cout<<name<<" d = "<<d<<endl;
        }
};
class akshat : student{
    private :
        int o;
    public :
        akshat(){}
        akshat(int f){
            d = f;
            cout<<"d = "<<d<<endl;
        }
};
int main(){
    student w,k(3);
    akshat r,e(8);
    w.show();    
    return 0;
}