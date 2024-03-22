#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){


    //MAX HEAP
    priority_queue<int> pq;
    pq.push(8);
    pq.push(4);
    pq.push(9);
    pq.push(1);
    pq.push(2);
    pq.push(10);
    
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}