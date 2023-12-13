#include<iostream>
using namespace std;
class bank{
    private :  
        char name[100];
        int accno;
        char acctype;
        float balance;
    public :
        bank(int x){
            accno = x;
            cout<<"int";
        }
        bank(char w){
            acctype = w;
            cout<<"char";
        }
        bank(int q,char o,float e){
            balance = e;
            cout<<"float";
        }
};
int main(){
    int u;
    char j;
    float i;
    cout<<"Enter the any value like int,float & char"<<endl;
    cin>>u>>j>>i;
    bank a(u,j,i);
    return 0;
}