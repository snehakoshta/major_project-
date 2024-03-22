#include<iostream>
#include<forward_list>
using namespace std;
int main(){

   forward_list<int>list{98,44,23,33};
    list.push_front(10);
    list.push_front(23);
    list.pop_front();
    for(int  x: list)
    cout<< x<<" ";
}





