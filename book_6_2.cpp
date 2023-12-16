#include<iostream>
#include<cstring>
using namespace std;
class String{
    
    public :
        String(){
            cout<<"Default Constructor invoked"<<endl;
        }
        String(int x){
            cout<<"Pramized Constructor invoked "<<x<<endl;
        }
        void show(){
            cout<<"Enter the string"<<endl;
        //    cin>>s1;
          //  cout<<s1<<endl;
        }
};
int main(){
    String s;
    s.show();
    return 0;
}