#include<iostream>
using namespace std;

    int main(){
    int var1{123};
    cout<<"var1: "<<var1<<endl;
    var1 = 98;
    cout<<"var1: "<<var1<<endl;
    double var2=4.87;
    cout<<"var2: "<<var2<<endl;
    var2 = 98.56;
    cout<<"var2: "<<var2<<endl;
    bool state{true};
    cout<<"state: "<<state<<endl;
    state = false;
    cout<<"state: "<<state<<endl;
    cout<<boolalpha;
    cout<<"state: "<<state<<endl;
    state = true;
    cout<<"state: "<<state<<endl;
    auto var3{332u};
    var3 = -22;
    cout<<"var3: "<<var3<<endl;
    return 0;
}