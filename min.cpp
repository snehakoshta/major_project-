#include<iostream>

using namespace std;
int main(){

  int arr[] = { 1,5,29,-1,0,4};
  int n = sizeof(arr)/ sizeof(arr[0]);

  int mini = INT32_MAX;

  for(int i=0; i<n; i++){
    if(arr[i]<mini)
      mini = arr[i];
  }

  cout<<mini;
}