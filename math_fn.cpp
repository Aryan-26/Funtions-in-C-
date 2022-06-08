#include <iostream>
#include <cmath>
using namespace std;


int main(){

	double weight { 7.7 };

    cout << "Weight rounded to floor is : " << floor(weight) << endl;
 
    cout << "Weight rounded to ceil is : " <<ceil(weight) << endl;

    double savings {-5000 };
  
    cout << "Abs of weight is : " << abs(weight) << endl;
    cout << "Abs of savings is : " << abs(savings) << endl;

    double exponential = exp(10);
    cout << "The exponential of 10 is : " << exponential << endl;
 
    cout << "3 ^ 4 is : " << pow(3,4) << endl;
    cout << "9^3 is : " <<pow(9,3) << endl;
 
    cout << "Log ; to get 54.59, you would elevate e to the power of : "<<log(54.59)<<endl;
 
    cout << "To get 10000, you'd need to elevate 10 to the power of : "<<log10(10000)<< endl;

    cout << "The square root of 81 is : " << std::sqrt(81) << std::endl;
    
    cout << "3.654 rounded to : " << round(3.654) <<endl;
    cout << "2.5 is rounded to : " << round(2.5) <<endl;
    cout << "2.4 is rounded to : " << round(2.4) <<endl;   
    return 0;
}