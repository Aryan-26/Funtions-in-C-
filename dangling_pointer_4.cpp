#include<iostream>
using namespace std;
//Solution1 : Initialize your pointers immediately upon declaration
    int main(){
	cout << endl;
	cout << "Solution 1 : " << endl;
    int *p_number5{nullptr};
    int *p_number6{new int(87)};
	 
	//Check for nullptr before use
	if(p_number6!= nullptr){
		cout << "*p_number6 : " << *p_number6 << endl;
	}else{
        cout << "Invalid address" << endl;
    }
    return 0;
    }