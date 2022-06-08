#include<iostream>
#include<iomanip>
using namespace std;

    int main(){
    cout<<"Formatted Table"<<endl;
    cout<<right;
    cout<<setw(10)<<"Lastname"<<setw(10)<<"Firstname"<<setw(10)<<"Age"<<endl;
    cout<<setw(10)<<"Daniel"<<setw(10)<<"Gray"<<setw(10)<<"25"<<endl;
    cout<<setw(10)<<"Stanley"<<setw(10)<<"Woods"<<setw(10)<<"33"<<endl;
    cout<<setw(10)<<"Jordan"<<setw(10)<<"Parker"<<setw(10)<<"45"<<endl;
    cout<<setw(10)<<"Joe"<<setw(10)<<"Ball"<<setw(10)<<"19"<<endl;
    cout<<setw(10)<<"Izaiah"<<setw(10)<<"Robinson"<<setw(10)<<"28"<<endl;
    cout<<endl;
    cout<<"Formatted table with variables"<<endl;
    int col_width{14};
    cout<<left;
    cout<<setw(col_width)<<"Lastname"<<setw(col_width)<<"Firstname"<<setw(col_width)<<"Age"<<endl;
    cout<<setw(col_width)<<"Stanley"<<setw(col_width)<<"Woods"<<setw(col_width)<<"25"<<endl;
    cout<<setw(col_width)<<"Daniel"<<setw(col_width)<<"Gray"<<setw(col_width)<<"33"<<endl;
    cout<<setw(col_width)<<"Jordan"<<setw(col_width)<<"Parker"<<setw(col_width)<<"45"<<endl;
    cout<<setw(col_width)<<"Joe"<<setw(col_width)<<"Ball"<<setw(col_width)<<"19"<<endl;
    cout<<setw(col_width)<<"Izaiah"<<setw(col_width)<<"Robinson"<<setw(col_width)<<"28"<<endl;
    cout<<"Internal Justified"<<endl;
    cout<<right;
    cout<<setw(10)<<-123.45<<endl;
    cout<<internal;
    cout<<setw(10)<<-123.45<<endl;    
    cout<<"Table with fill characters:"<<endl;
    col_width=20;
    cout<<left;
    cout<<setfill('-');
    cout<<setw(col_width)<<"Lastname"<<setw(col_width)<<"Firstname"<<setw(col_width)<<"Age"<<endl;
    cout<<setw(col_width)<<"Stanley"<<setw(col_width)<<"Woods"<<setw(col_width)<<"25"<<endl;
    cout<<setw(col_width)<<"Daniel"<<setw(col_width)<<"Gray"<<setw(col_width)<<"33"<<endl;
    cout<<setw(col_width)<<"Jordan"<<setw(col_width)<<"Parker"<<setw(col_width)<<"45"<<endl;
    cout<<setw(col_width)<<"Joe"<<setw(col_width)<<"Ball"<<setw(col_width)<<"19"<<endl;
    cout<<setw(col_width)<<"Izaiah"<<setw(col_width)<<"Robinson"<<setw(col_width)<<"28"<<endl;
    return 0;
}