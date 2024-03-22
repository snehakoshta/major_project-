#include<iostream>
#include<fstream>
using namespace std;
int main()
{    int a,b;
    ofstream out;
    out.open("test.txt");
    cout<<"enter the a and b values";
    cin>>a>>b;
    int c=a+b;
    cout<<c;
    out<<"enter the value of a and b";
    
    out<<c;
    out.close();


}