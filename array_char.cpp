#include<iostream>
using namespace std;

    int main(){
    char message[5] {'H', 'e', 'l', 'l', 'o'};
    cout<<"Message: ";
    for (auto c:message)
    {
        cout<<c;
    }
    cout<<endl;
    // Change characters in array   
    message[1] = 'a';
    for (auto c:message)
    {
        cout<<c;
    }
    cout<<endl;
    
    return 0;
}