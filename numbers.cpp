#include<iostream>
using namespace std;

    int main(){
    int value1 {10};
    int value2 {-300};
    signed int value3{20};
    signed int value4 {-50};
    unsigned int value5 {100};
    // unsigned int value6 {-250}; -->>compiler error
    cout<<value1<<endl;
    cout<<value2<<endl;
    cout<<"Size of value 1 is "<<sizeof(value1)<<endl;
    cout<<"Size of value 2 is "<<sizeof(value2)<<endl;
    cout<<"Size of value 3 is "<<sizeof(value3)<<endl;
    cout<<"Size of value 4 is "<<sizeof(value4)<<endl;
    cout<<"Size of value 5 is "<<sizeof(value5)<<endl;
    // cout<<"Size of value 6 is "<<sizeof(value6)<<endl; --> Compiler Error
    return 0;
}