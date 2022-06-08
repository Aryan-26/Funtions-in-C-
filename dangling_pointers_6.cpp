#include<iostream>
using namespace std;

    int main(){
    //Solution 3 
	//For multiple pointers pointing to the same address ,  Make sure there is
	//one clear pointer (master pointer) that owns the memory ( responsible for releasing when
    // necessary) , other pointers should only be able to dereference when the master pointer is valid
    
	cout << endl;
	cout << "Solution 3 : " << endl;
    int * p_number8 {new int{382}};// Let's say p_number8 is the master pointer
    int * p_number9 {p_number8};
    
    //Dereference the pointers and use them
    cout << "p_number8 - " << p_number8 << " - " << *p_number8 << endl;
    
    if(!(p_number8 == nullptr)){ // Only use slave pointers when master pointer is valid
           cout<< "p_number9 - " << p_number9 << " - " << *p_number9 << endl;
    }
    
    delete p_number8; // Master releases the memory
    p_number8 = nullptr;
    
    if(!(p_number8 == nullptr)){ // Only use slave pointers when master pointer is valid
           cout<< "p_number9 - " << p_number9 << " - " << *p_number9 << endl;
    }else{
        cerr << "WARNING : Trying to use an invalid pointer" << endl;
    }
    return 0;
}