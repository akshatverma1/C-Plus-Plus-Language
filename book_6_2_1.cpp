#include <iostream>
#include <cstring>
using namespace std;
class String
{
char d;
public:
    String()
    {
        cout << "Default Constructor invoked" << endl;
    }
    String(char x)
    {
        cout <<"Object with String Constant"<< endl;
        d = x;
        cout<<d<<endl;
            
    }
    String(int s,int u){
        cout<<"Two String add constructor called"<<endl;
        cout<<d<<endl;
    }
};
int main()
{
    string s1;
    String s2('a');
    string = strcpy(s1,s2);
    String r(1,2);
    return 0;
}