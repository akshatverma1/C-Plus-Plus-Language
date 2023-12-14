#include<iostream>
using namespace std;
class akshat{
    int a,b;
    public :
        akshat (void);
        void setdata(){
            cout<<a<<" & "<<b;
        }
};
akshat :: akshat(void){
    a=0;
    b=2;
}
int main(){
    akshat t;
    t.setdata();    
    return 0;
} 