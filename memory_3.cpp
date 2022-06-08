#include<iostream>
using namespace std;

    int main(){
    int *p_number5{ new int}; // Memory location contains junk value
    int *p_number6{ new int (22) }; // use direct initialization
    int *p_number7{ new int { 23 } }; // use uniform initialization
	 
	cout <<endl;
	cout << "Initialize with valid memory address at declaration : " <<endl;
	cout << "p_number5 : " << p_number5 <<endl;
	cout << "*p_number5 : " << *p_number5 <<endl; // Junk value
	 
	cout << "p_number6 : " << p_number6 <<endl;
	cout << "*p_number6 : " << *p_number6 <<endl;
	 
	cout << "p_number7 : " << p_number7 <<endl;
	cout << "*p_number7 : " << *p_number7 <<endl;
	 
	//Remember to release the memory
	delete p_number5;
	p_number5 = nullptr;
	  
	delete p_number6;
	p_number6 = nullptr;
	  
	delete p_number7;
	p_number7 = nullptr;
    //Can reuse pointers
    p_number5 = new int(81);
    cout << "*p_number : " << *p_number5 << endl;

    delete p_number5;
    p_number5 = nullptr;

    //Calling delete twice on a pointer : BAD!
    p_number5 = new int(99);
    cout << "*p_number5 : " << *p_number5 << endl;
    delete p_number5;
    // delete p_number5;
                                                            
    cout << "Program is ending well" << endl;
    return 0;
}