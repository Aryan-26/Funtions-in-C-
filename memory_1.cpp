#include <iostream>
using namespace std;

int main(){

	//How we've used pointers so far
    
	int number {22}; // Stack
	
	int * p_number = &number;
	
	cout << endl;
	cout << "Declaring pointer and assigning address : " << endl;
	cout << "number : " << number << endl;
	cout << "p_number : " << p_number << endl;
	cout << "&number : " << &number << endl;
	cout << "*p_number : " << *p_number <<  endl;
	
	
	int * p_number1; // Uninitialized pointer , contains junk address
	int number1 {12};
	p_number1 = &number1; // Make it point to a valid address
	cout << endl;
	cout << "Uninitialized pointer : " << endl;
	cout << "*p_number1 : " << *p_number1 << endl;
    

   //BAD
	//Writing into uninitialized pointer through dereference
    /*
	int *p_number2; // Contains junk address : could be anything
    cout << "Writting in the 55" << endl;
	*p_number2 = 55; // Writing into junk address : BAD!
	cout << std::endl;
	cout << "Writing into uninitialized pointer through dereference" << endl;
	cout << "p_number2 : " << p_number2 << endl; // Reading from junk address.
    cout << "Dereferencing bad memory" << endl;
	cout << "*p_number2 : " << *p_number2 << endl;
    */
	
	
	//Initializing pointer to null
    /*
	//int *p_number3{nullptr}; // Also works
	int * p_number3 {}; // Initialized with pointer equivalent of zero : nullptr
						// A pointer pointing nowhere
    std::cout << "Writting into nullptr memory" << std::endl;
	//*p_number3 = 33; // Writting into a pointer pointing nowhere : BAD, CRASH
    std::cout << "Done writting" << std::endl;
	
	cout << endl;
	cout << "Reading and writting through nullptr : " << endl;
	//cout << "p_number3 : " << p_number3 << endl;
	//cout << "*p_number3 : " << *p_number3 << endl;// Reading from nullptr
															// BAD, CRASH.
                                                            */


    //It is also possible to initialize the pointer with a valid
	//address up on declaration. Not with a nullptr
     return 0;
}