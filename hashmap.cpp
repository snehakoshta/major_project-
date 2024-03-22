//hashing program for finding integer frequency
#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
using namespace std;
int main(){
      
      vector<int> A={5,7,6,3,4,2,2,5,7};
      unordered_map<int,int >mp;
      for(int i=0;i<A.size();i++){
        mp[A[i]]++;
      }
   cout<<mp[4]<<endl;
   cout<<mp[2]<<endl;
   cout<<mp[7];


}




















