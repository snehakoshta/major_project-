#include<iostream>
using namespace std;
templete <typename T ,int limit>
T myMax (T arr[],int n){
    T res = arr[0];
    for(int i=1 ; i<n ;i++)
    if(arr[i]>res)
    res = arr[i];
    
}