#include<iostream>
using namespace std;
class item{
    private :
        int x;
        int y;
    public :
        void setdata(int r,int e){
            x = r;
            y = e;
        }
        void getdata(){
            cout<<"X = "<<x<<endl;
            cout<<"Y = "<<y<<endl;
        }
};
int main(){
    int i,y,t,v=0;
    item *ptr = new item[3];//dynamically initiation
    item *ptr_1 = ptr;
    for (int i = 0; i <3; i++)
    {
        cout<<"Sequences = "<<i+1<<endl;
        cout<<"Enter the Value of X = ";
        cin>>y;
        cout<<"Enter the Value of Y = ";
        cin>>t;
        ptr->setdata(y,t);
        ptr++;
    }
    for (int j = 0; j < 3; j++)
    {
        cout<<"Sequences = "<<j+1<<endl;
        ptr_1->getdata();
        ptr_1++;
    }
    return 0;
}