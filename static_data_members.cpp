#include<iostream>
using namespace std;
class users{
    private :
    static int count;
    char name;
    int roll;
    public :
    void getdata(void);
    void setdata(void);

    static void func(){
        cout<<"The Value of count is "<<count<<endl;
    }
};
int users :: count =2000;
void users :: setdata(){
    cout<<"Enter rollno of student"<<endl;
    cin>>roll;
}
void users :: getdata(){
    cout<<roll<<endl;
    count++;
    cout<<"This is a sequence of the this roll no.  "<<count<<endl;
}
int main(){
    users akshat,lakshya,utkarsh;
    akshat.setdata();
    akshat.getdata();
    users :: func();
    lakshya.setdata();
    lakshya.getdata();
    users :: func();
    utkarsh.setdata();
    utkarsh.getdata();
    users :: func();
    return 0;
}