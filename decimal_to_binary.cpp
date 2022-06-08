#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int decimaltobinary(int n){
    int ans = 0;
    int x=1;
    while (x <= n)
        x*=2;
        x/=2;
    while (x>0)
    {
        int lastdigit = n/x;
        n -= lastdigit*x;
        x/=2;
        ans = ans*10 + lastdigit; 
    }   
    return ans;
}
    int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    cout<<"Decimal number of given octal number is "<<decimaltobinary(n);
    return 0;
}