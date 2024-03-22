#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
priority_queue<int, vector<int>,greater<int>> min_heap;
min_heap.push(10);
min_heap.push(15);
min_heap.push(30);
min_heap.push(40);
min_heap.push(50);
min_heap.push(2);
     
     while(!min_heap.empty()){
        cout<<"\n" <<min_heap.top();
        min_heap.pop();
     }

}
