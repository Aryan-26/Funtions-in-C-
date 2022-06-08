#include<iostream>
using namespace std;

    int main(){
    int scores[] = {1, 3, 2 ,5, 6, 7};
    for (size_t i = 0; i < size(scores); i++)
    {
        cout<<"scores["<<i<<"] "<<scores[i]<<endl;
    }  
    return 0;
}