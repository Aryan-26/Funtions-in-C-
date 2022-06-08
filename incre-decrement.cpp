#include<iostream>
using namespace std;

    int main(){
    int value{5};
    value = value + 1;
    cout<<"Value: "<<value<<endl;
    value=++value;
    cout<<"Value: "<<value<<endl;
    value=--value;
    cout<<"Value: "<<value<<endl ;
    value=value-1;
    cout<<"Value: "<<value;
    return 0;
}