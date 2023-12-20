#include<iostream>
using namespace std;
int main(){
    
    int* arr = new int[4];
    arr[0] = 0;
    arr[1] = 10;
    arr[2] = 20;
    arr[3] = 30;
    delete[] arr;
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" "<<arr[3];
    return 0;

}