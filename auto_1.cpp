#include<iostream>
using namespace std;

    int main(){
    auto var1 = 12;
    auto var2 = 14.2;
    auto var3 = 13.6f;
    auto var4 = 15.0L;
    auto var5 = 123u;
    auto var6 = 123uL;
    auto var7 = 129ll;
    auto var8 = 'H';
    cout<<"var1 occupies: "<<sizeof(var1)<<"bytes"<<endl;
    cout<<"var2 occupies: "<<sizeof(var2)<<"bytes"<<endl;
    cout<<"var3 occupies: "<<sizeof(var3)<<"bytes"<<endl;
    cout<<"var4 occupies: "<<sizeof(var4)<<"bytes"<<endl;
    cout<<"var5 occupies: "<<sizeof(var5)<<"bytes"<<endl;
    cout<<"var6 occupies: "<<sizeof(var6)<<"bytes"<<endl;
    cout<<"var7 occupies: "<<sizeof(var7)<<"bytes"<<endl;
    cout<<"var8 occupies: "<<sizeof(var8)<<"bytes"<<endl;
    cout<<var1<<endl;
    cout<<var2<<endl;
    cout<<var3<<endl;
    cout<<var4<<endl;
    cout<<var5<<endl;
    cout<<var6<<endl;
    cout<<var7<<endl;
    cout<<var8<<endl;
    return 0;
}