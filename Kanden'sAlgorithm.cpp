#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n=8;
    int A[]={-2,-3,4,-1,-2,1,5,-3};
    int max_ending_here=0;
    int max_so_far=INT_MIN;
    for( int i=0;i<n;i++){
        max_ending_here=max_ending_here+A[i];

    
    if(max_so_far<max_ending_here){
        max_so_far=max_ending_here;
    }
    if(max_ending_here<0){
        max_ending_here=0;
    }
}
    cout<<max_so_far;

}