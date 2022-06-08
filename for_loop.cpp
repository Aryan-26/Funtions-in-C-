#include<iostream>
using namespace std;

    int main(){
    for (int i = 0; i <10; i++)
    {
        cout<<i<<": I love C++"<<endl;
    }
    cout<<endl;
    size_t i{0};  // Iterator defined outside
    for (i = 0; i <10; i++) 
    {
        cout<<i<<": I love C++"<<endl; //size_t is unsigned int so it only represents positive integers
    }
    cout<<"Loop Done"<<endl;
    cout<<"Size of size_t is: "<<sizeof(size_t)<<endl;
    cout<<"i: "<<i<<endl;
    const size_t count =10; 
    for (size_t i = 0; i < count; i++)
    {
        cout<<i+1<<": Hello, World !"<<endl;
    }
    
    
    return 0;
}