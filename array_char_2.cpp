#include<iostream>
using namespace std;

    int main(){
    char message[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    cout<<"message: "<<message<<endl;
    cout<<"sizeof(message): "<<sizeof(message)<<endl;
    char message1[6] = {'H', 'e', 'l', 'l', 'o'};
    cout<<"message1: "<<message1<<endl;
    cout<<"sizeof(message1): "<<sizeof(message1)<<endl;
    char message2[] = {'H', 'e', 'l', 'l', 'o'};  // This is not a C string,
                                                  // as there is  no null character
    cout<<"message2: "<<message2<<endl;
    cout<<"sizeof(message2): "<<sizeof(message2)<<endl; 

    //String Literals
    char message4 []{"Hello World, how are you doing!"};
    cout<<"message4: "<<message4<<endl;
    cout<<"sizeof(message4): "<<sizeof(message4)<<endl;

    return 0;
}