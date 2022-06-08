#include<iostream>
using namespace std;

    int main(){
    // Case 1: Uninitaialized pointer 
    int *p_number; //Dangling uninitialized pointer 
    cout<<"Case 1: uninitialized pointer: "<<endl;
    cout<<"p_number : "<<p_number<<endl;
    cout<<"*p_number : "<<*p_number<<endl;
    cout<<"Program is ending well"<<endl;
    return 0;
}