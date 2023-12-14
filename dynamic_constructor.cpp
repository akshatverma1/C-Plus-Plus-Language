#include <iostream>
using namespace std;
class akshat
{
private:
    int amount;
    int year, time;
    float e;

public:
    akshat() {}
    akshat(int a1, int a2, float a3);
    akshat(int a1, int a2, int w1);
};
akshat ::akshat(int a1, int a2, float a3)
{

    amount = a1;
    year = a2;
    e = a3;
    cout << amount << "," << year << "," << e << endl;
    cout << "first constructor" << endl;
}
akshat ::akshat(int a1, int a2, int w1)
{
    amount = a1;
    year = a2;
    time = w1;
    cout << amount << "," << year << "," <<time<< endl;
    cout << "second constructor";
}
int main()
{
    akshat c1,c2;
    //cout << "Enter the value of a1,a2 & a3" << endl;
    int a1, a2,w1;
    float a3;
    cout << "Enter the value of a1,a2 & a3" << endl;
    cin >> a1 >> a2 >> a3;
    c1 = akshat(a1, a2, a3);
    cout << "Enter the value of a1,a2 & w1" << endl;
    cin >> a1 >> a2 >> w1;
    c2 = akshat(a1,a2,w1);
    return 0;
}