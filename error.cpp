#include<iostream>
#include<iomanip> // --->for setting precision
using namespace std;

    int main(){
    float a =7.1;
    float b = 7.1f/0;
    long double c = 1.12345678901234567890L;
    double number1 = 0.00000000003498;
    double number2 = 3.498e-11;
    cout<<"Hello, World!"<<endl;
    cerr<<"Hello"<<endl; //cerr is for error message i.e., Something is wrong
    clog<<"Hi"<<endl;  //clog is for log message i.e., Something happened
    cout<<b<<endl;
    cout<<b/b<<endl;
    cout<<1/b<<endl;
    cout<<setprecision(21);
    cout<<c<<endl;
    cout<<number1<<endl;
    cout<<number2<<endl;
    return 0;
}