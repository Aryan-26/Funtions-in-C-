#include<iostream>
using namespace std;

    int main(){
    int i, key, arr[50], n, flag;
    flag=0;
    cout<<"Enter the number of elements you want to enter: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements in sorted array: "<<endl;
    for (i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the number of elements to be searched: ";
    cin>>key;
    for ( i = 0; i < n; i++)
    {
        if (arr[i]==key)
        {
            cout<<"Found the "<<key<<" at position "<<i+1;
            flag=1;
            break;
        }
        
    }
    if (flag==0)
    {
        cout<<"Element not found";
    }   
    return 0;
}