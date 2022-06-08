#include<iostream>
using namespace std;

    int main(){
   /*
    // int *data = new int[1000000000000];
    for (size_t i = 0; i < 10000000; i++)
    {
        int *data = new int[10000000];
    } */
    //exception mechanism
    //std::nothrow
    /* for (size_t i = 0; i < 100; i++)
    {  
        try
        {
            int *data = new int[1000000000];
        }
        catch(const exception& ex)
        {
            cout<<"Something went wrong"<< ex.what()<<endl;
        }
    } */
    for (size_t i = 0; i < 100; i++)
    {  
        int *data = new(nothrow) int[1000000000];
        if (data!=nullptr)
        {
            cout<<"Data allocated"<<endl;
        }
        else
        {
            cout<<"Data allocation failed"<<endl;
        }
    }
    cout<<"Program is ending well !!"<<endl;
    return 0;
} 