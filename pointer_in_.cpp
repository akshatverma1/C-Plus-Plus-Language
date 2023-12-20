#include<iostream>
using namespace std;
int main(){
    /*
    char a = 'a';
    char *ptr = &a;
    cout<<int(ptr)<<" "<<int(a);
    */
    char *p = new char ('f');
    cout<<*p<<" "<<int(p)<<" "<<endl;
    
    int* arr = new int[3];
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 2;
    cout<<arr[0]<<" "<<int(&arr[1])<<" "<<arr[2];
    return 0;
}