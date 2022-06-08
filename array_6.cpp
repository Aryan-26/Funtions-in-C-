#include<iostream>
using namespace std;

    int main(){
    int scores[]{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    /* cout<<"Size of scores: "<<sizeof(scores)<<endl; 
    cout<<"Size of scores[0]: "<<sizeof(scores[0])<<endl; 
    int count{sizeof(scores)/sizeof(scores[0])};
    for (size_t i = 0; i < count; i++)
    {
        cout<<"Scores ["<<i<<"]: "<<scores[i]<<endl;
    } */
    //Range Based for  loop
    for(auto i: scores){
        cout<<"Value: "<<i<<endl;
    }
    return 0;
}