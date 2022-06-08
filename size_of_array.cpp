#include<iostream>
using namespace std;

    int main(){
    int scores[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    cout<<"Scores size: "<<size(scores)<<endl;
    /* for (size_t i = 0; i < 10; i++)
    {
        cout<<"Scores ["<<i<<"]: "<<scores[i]<<endl;
    } */
    int count{size(scores)};
    for (size_t i = 0; i < count; i++)
    {
        cout<<"Scores ["<<i<<"]: "<<scores[i]<<endl;
    }  
    return 0;
}