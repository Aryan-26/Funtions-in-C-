#include<iostream>
using namespace std;

    int main(){
    // Case 2: Deleted Pointer
    cout<<"Case 2: Deleted Pointer"<<endl;
    int *number{new int{64}};
    cout<<"*number (before delete): "<<*number<<endl;
    delete number;
    cout<<"*number (after delete): "<<*number<<endl;
    cout<<"Program is ending well !!"<<endl; 
    return 0;
}