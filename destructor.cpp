#include<iostream>
using namespace std;
class electron{
    private :
    int a =1;
    public :
        electron(){
            a++;
            cout<<"Constructor invoked "<<a<<endl;
        }
        ~electron(){
            cout<<"destructor call "<<a<<endl;
            a--;
            }
};
int main()
{
    electron a;
    {
        cout <<"First Object"<<endl;
        electron s,r;
        cout <<"Two Object call"<<endl;
    }
    electron b;
    {
        cout <<"second Object"<<endl;
    }
    return 0;
}