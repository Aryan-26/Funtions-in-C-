#include<iostream>
using namespace std;

    int main(){
    int scores[]{2, 4, 5, 6, 3};
    int sum=0;
    for (int element: scores)
    {
        sum+=element;
    }
    cout<<"Scores sum: "<<sum<<endl;
    return 0;
}