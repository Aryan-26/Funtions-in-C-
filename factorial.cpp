#include<iostream>
using namespace std;
int fact(int n){
    int factorial=1;
    for (int i = 1; i <=n; i++)
    {
        factorial*=i;
    }
    return factorial;
}
    int main(){
        int n;
        cout<<"Enter the number: ";
        cin>>n;
        cout<<"The factorial of the given number is ";
        int ans = fact(n);
        cout<<ans;
    return 0;
}