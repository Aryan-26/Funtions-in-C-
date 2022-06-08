#include<iostream>
using namespace std;
int octaltodecimal(int n){
    int ans = 0;
    int x=1;
    while (n>0)
    {
        int y =n%10;
        ans +=y*x;
        x*=8;
        n/=10;
    }
    return ans;
}
    int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    cout<<"Decimal number of given ocatal number is "<<octaltodecimal(n);
    return 0;
}