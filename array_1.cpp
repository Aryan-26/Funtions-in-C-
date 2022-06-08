#include<iostream>
using namespace std;

    int main(){
    int scores[3];
    scores[0] = 23;
    scores[1] = 34;
    scores[2] = 12;
    cout<<"The scores are:"<<endl;
    for (size_t i = 0; i < 3; i++)
    {
        cout<<scores[i]<<endl;
    }
    
    return 0;
}