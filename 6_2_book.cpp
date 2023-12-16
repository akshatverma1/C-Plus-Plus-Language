#include<iostream>
#include<cstring>
using namespace std;
class String{
    string s1;
    public :
        void show(){
            cout<<"Enter the string"<<endl;
            cin>>s1;
            cout<<s1<<endl;
        }
};
int main(){
    String s;
    s.show();
    return 0;
}