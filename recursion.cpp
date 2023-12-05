#include<iostream>
using namespace std;
int fake();
int main(){
	fake();
	return 0;
}
int fake(){
	int a;
	cin>>a;
	if(a<10){
		fake();
	}
	else{
		cout <<"Enter the number between 5 to 10";
	}
	return 0;
}
