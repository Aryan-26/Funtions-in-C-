#include<iostream>
using namespace std;

    int main(){
    const unsigned int count {10};
    unsigned int i{11};
    do
    {
        cout<<"["<<i<<"] : I love C++" << endl;
        ++i;
    } while (i<count);
    
    return 0;
}