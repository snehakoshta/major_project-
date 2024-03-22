#include<iostream>
using namespace std;
int main()
{
    int a[65],i,j,n;
    cout<<"enter the element";
    cin>>a[n];
    
for(int i=1;i<n;i++){
    cin>>a[i];

    }
    for( i=1;i<n;i++){
        for(j=1;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp = a[j];
                a[j] =a[j+1];
                a[j+1]= temp;
            }
        }
    } 
    for(int i=1;i<n;i++){
    cout<<a[i];
    }

}