#include<iostream>
using namespace std;

    int main(){
    // char message[5] {'H', 'e', 'l', 'l', 'o'};
    char message[6] {'H', 'e', 'l', 'l', 'o', '\0'};
    // If a character array is null terminated it is called as a C-string
    cout<<"Message: "<<message<<endl;
    return 0;
}