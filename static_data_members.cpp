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
};
int users :: count;
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
    lakshya.setdata();
    lakshya.getdata();
    utkarsh.setdata();
    utkarsh.getdata();
    return 0;
}