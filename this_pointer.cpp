#include<iostream>
using namespace std;
class akshat{
    int y;
    public :
        void car(int y){
            this->y = y;
            cout<<y<<endl;
        }
        void getdata(){
            cout<<y;
        }
};
int main(){
    akshat t;
    t.car(3);
    t.getdata();
    return 0;
}