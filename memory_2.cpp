#include<iostream>
using namespace std;

    int main(){
    //Dynamic heap memory
    int *p_number4{nullptr};
	p_number4 = new int; 	// Dynamically allocate space for a single int on the heap
							// This memory belongs to our program from now on. The system
							// can't use it for anything else, untill we return it.
							//After this line executes, we will have a valid memory location
							// allocated. The size of the allocated memory will be such that it
							// can store the type pointed to by the pointer
						
					
	*p_number4 = 77; // Writting into dynamically allocated memory
	cout << endl;
	cout << "Dynamically allocating memory : " << endl;
	cout <<"*p_number4 : " << *p_number4 << endl;
    //Return memory to the OS
    delete p_number4;
    *p_number4 = 45;
    cout<<"Done Writing !"<<endl;
    // *p_number4 = nullptr;
    return 0;
}