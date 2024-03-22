//merge ropes Question-Heap
#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    vector<int> ropes={10,17,45,89};
priority_queue<int,vector<int>,greater<int>> pq;
pq.push(10);
pq.push(17);
pq.push(45);
pq.push(89);
int cost =0;
while(pq.size()>1){
    int first = pq.top();
    pq.pop();
    int second = pq.top();
    pq.pop();
    int sum = first + second;
    cost = cost+sum;
    pq.push(sum);
}



cout<<cost;



}