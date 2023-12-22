#include<iostream>
using namespace std;
class shape{
    public : 
    double length;
    double width;
        void get_data(double x,double y){
            length = x;
            width = y;
        }
        virtual void display_area()=0;
};
class triangle : public shape{
    public :

    void display_area(){
        cout<<"Area of the triangle"<<endl;
        double v = ((0.5)*length*width);
        cout<<v<<endl;
    }
};
class rectangle : public shape{
    public :
    void display_area(){
        cout<<"Area of the rectangle"<<endl;
        double l = (length*width);
        cout<<l<<endl;
    }
};

    int main(){
    shape *ptr[2];
    triangle t;
    rectangle r;
    ptr[0] = &t;
    ptr[1] = &r;
    ptr[0]->get_data(88,77);
    ptr[0]->display_area();
    ptr[1]->get_data(88,77);
    ptr[1]->display_area();
    return 0;
}