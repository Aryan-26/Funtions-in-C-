#include<iostream>
using namespace std;

    int main(){
    // Case 3: Multiple pointers pointing to the same address
    int *p_number3{new int{83}};
    int *p_number4{p_number3};
    cout<<"p_number3: "<<p_number3<<" --> "<<*p_number3<<endl;
    cout<<"p_number4: "<<p_number4<<" --> "<<*p_number4<<endl;
    //Deleting p_number3
    delete  p_number3;
    //Now p_number4 points to deleted memory. Dereferencing it will lead to
    //undefined behaviour : Crash/garbage or whatever
    cout<<"p_number4(after deleting p_number3): "<<p_number4<<" --> "<<*p_number4<<endl;
    cout<<"Program is ending well"<<endl;
    return 0;
}