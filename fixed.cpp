#include<iostream>
using namespace std;

    int main(){
    double a{3.14790346592983};
    double b{2006.0};
    double c{1.34e-10};
    // cout<<uppercase;
    cout<<"double values (default : use scientific wherever necessary)"<<endl;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;
    cout<<endl;
    cout<<"double value(fixed): "<<endl;
    cout<<fixed;   
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;
    cout<<endl;
    cout<<"double values(back to default: )"<<endl;
    cout.unsetf(ios::scientific | ios::fixed);
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
    cout<<"c: "<<c<<endl;
    return 0;
}