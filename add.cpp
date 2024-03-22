#include<iostream>
using namespace std;
float area(float l , float b){
    return(l*b);

}
float area(float r){
    return(3.14*r*r);
}
int main(){
    float l,b;
    cout<<"enter the l and b";
    cin>>l>>b;
    cout<<area(12.8,89.7);
     float r;
     cout<<"\nenter the radius r";
     cin>>r;
     cout<<area(2.6,0);
}