#include<iostream>
using namespace std;
class akshat{
    static int count;
    private :
        int a=7;
    public :
        void car(){
            int b = 2;
            count++;
            cout<<a<<",b = "<<count<<endl;
        }
};
int akshat :: count;
int main(){
    akshat p[4];
    p[0].car();
    p[1].car();
    p[2].car();
    p[3].car();
    return 0;
    }