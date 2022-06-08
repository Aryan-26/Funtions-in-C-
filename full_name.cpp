#include<iostream>
#include<string>
using namespace std;

    int main(){
    string full_name;
    int age;
    cout<<"Please enter your name and age:"<<endl;
    getline(cin, full_name);
    cin>>age;
    cout<<"Hello "<<full_name<<". You are "<<age<<" years old"<<endl;
    return 0;
}