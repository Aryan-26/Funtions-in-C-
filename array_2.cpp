#include<iostream>
using namespace std;

    int main(){
    int arr[10];
    for (size_t i = 0; i < 10; i++)
    {
        arr[i] = i*10;
    }
    for (size_t i = 0; i < 10; i++)
    {
        cout<<"arr["<<i<<"]: "<<arr[i]<<endl;
    }
    
    return 0;
}