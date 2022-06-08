#include<iostream>
using namespace std;

    int main(){
    bool red_light = true;
    bool green_light  =  false;
    if (red_light)
    {
        cout<<"Stop"<<endl;
    }
    else{
        cout<<"Go through !!"<<endl;
    } 
    // size of bool
    cout<<"sizeof(bool): "<<sizeof(bool)<<endl;
    //Printing out a bool
    //1 -->true
    //2 -->false
    cout<<"Red light: "<<red_light<<endl;
    cout<<"Green light: "<<green_light<<endl;
    //To print direcctly true and flase instead of 0 and 1
    cout<<boolalpha;
    cout<<"Red light: "<<red_light<<endl;
    cout<<"Green light: "<<green_light<<endl;
    return 0;
}