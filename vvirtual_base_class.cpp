#include<iostream>
using namespace std;
class base{
    public : 
    int a = 6;
};
class derived1 : virtual public base{
    public :
    void setdata(){    
    cout<<"derived1 = "<<a<<endl;
}
};
class derived2 : virtual public base{
    public :
    void getdata(){    
    cout<<"derived2 = "<<a<<endl;
}
};
class son : public derived1 , public derived2{
    public :
    void detdata(){    
    cout<<"detdata = "<<a<<endl;
}
};
int main(){
    son s;
    s.detdata();
    return 0;
}