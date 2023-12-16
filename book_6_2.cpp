#include <iostream>
#include <cstring>
using namespace std;
class String
{
char d[100];
public:
    String()
    {
        cout << "Default Constructor invoked" << endl;
    }
    String(char x[100])
    {
        cout <<"Object with String Constant"<< endl;
        d[100] = x[100];
        //gets(d);
        puts(d);
    }
    String(int s,int u){
        cout<<"Two String add constructor called"<<endl;
        cout<<d<<endl;
    }
};
int main()
{
    String e("akshat");
    String r(1,2);
    return 0;
}