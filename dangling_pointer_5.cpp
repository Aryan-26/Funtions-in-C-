#include<iostream>
using namespace std;

    int main(){
    //Solution 2 : 
    //Right after you call delete on a pointer, remember to reset
	//the pointer to nullptr to make it CLEAR it doesn't point anywere
    
	cout << endl;
	cout << "Solution 2 : " << endl;
    int *p_number7{new int{82}};
    
    //Use the pointer however you want
    cout << "p_number7 - " << p_number7 << " - " << *p_number7 << endl;
   
    delete p_number7;
    p_number7 = nullptr; // Reset the pointer
	
	//Check for nullptr before use
	if(p_number7!= nullptr){
		cout << "*p_number7 : " << *p_number7 << endl;
	}else{
        cout << "Invalid memory access!" << endl;
    }
    
    return 0;
}