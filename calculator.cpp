#include<iostream>
using namespace std;
class MyCalc{ 
    public:
      static int add(int a ,int b){
        
     
     return a+b;
     }
    
    public:
   static int sub(int a ,int b){
     
    
     return a-b;
     }
     public:
      static int mul(int a ,int b){
         
    
     return a*b;
     }
    
    
};
int main(){
  MyCalc A;
  int a,b;
  cout<<A.add(9,8)<<endl;
  cout<<A.sub(7,8)<<endl;
  cout<<A.mul(12,4)<<endl;

}