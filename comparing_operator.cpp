#include<iostream>
using namespace std;

    int main(){
    int number1 = 45;
    int number2 = 60;
    cout<<"number1: "<<number1<<endl;
    cout<<"number2: "<<number2<<endl;
    cout<<"Comparing Variables"<<endl;
    cout<<boolalpha;
    cout<<"number1 < number2: "<<(number1<number2)<<endl; 
    cout<<"It is "<<(number1<number2)<<" that "<<number1<<"<"<<number2<<endl;
    return 0;
}