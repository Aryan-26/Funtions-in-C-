#include <iostream>
using namespace std;

int main(){

	int max{};
    
    int a{35};
    int b{200};
	
    cout << endl;
    cout << "using regular if " <<  endl;
	
    /*
    if(a >  b){
        max = a;
    }else{
        max = b;
    }
    */

    max = (a > b)? a : b; // Ternary operator
    auto max1 = (a>b)?  a:22.7;
	
    cout << "max : " << max <<  endl;
    cout << "max1 : " << max1 <<  endl;
	
   
    return 0;
}