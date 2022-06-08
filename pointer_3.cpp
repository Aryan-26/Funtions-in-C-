#include<iostream>
using namespace std;

    int main(){
    char message1[] {"Hello World"};
    cout<<"Message1: "<<message1<<endl; 
    message1[0] = 'B';
    cout<<"Message1: "<<message1<<endl;
    cout<<sizeof(message1);
    return 0;
}