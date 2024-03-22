#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"enter the a and b";
    cin>>a>>b;
    try{
   if(b==0)
      throw b;
      c=a/b;
      cout<<c;

    }
    catch(int p){
        cout<<"wrong second input ";
    }
}