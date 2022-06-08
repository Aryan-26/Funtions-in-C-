#include<iostream>
using namespace std;

    int main(){
    // Verbose nullptr check
    cout<<"Verbose nullptr check: "<<endl;
    int *p_number{}; //Iniatialized to nullptr
    p_number = new int(7);
    if (!(p_number==nullptr))
    {
        cout<<"p_number points to a VALID address: "<<p_number<<endl;
        cout<<"p_number: "<<*p_number<<endl;
    }
    else{
        cout<<"p_number points to a INVALID address."<<endl;
    }
    delete p_number;
    nullptr;
    int *p_number1{};
    delete p_number1;
    if (p_number1!=nullptr)
    {
        delete p_number1;
    }
    return 0;
}