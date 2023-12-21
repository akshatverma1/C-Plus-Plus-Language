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
    //akshat p[4];
    akshat *ptr[4]; //= &p[4];
    /*(*ptr[0]).car();
    (*ptr[1]).car();
    (*ptr[2]).car();
    (*ptr[3]).car();
    */
    ptr[0]->car();
    ptr[1]->car();
    ptr[2]->car();
    ptr[3]->car();
    return 0;
    }