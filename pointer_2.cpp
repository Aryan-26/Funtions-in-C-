#include<iostream>
using namespace std;

    int main(){
    char * p_message {"Hello World"};// This will also work
    const char *message = "Hello World";
    cout<<"The message is: "<<p_message<<endl;
    cout<<"The value stored at p_message is: "<<*p_message<<endl;
    *p_message = 'B';
    cout<<"The message is: "<<p_message<<endl;
    return 0;
}