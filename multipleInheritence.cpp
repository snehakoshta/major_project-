#include<iostream>
using namespace std;
class add{

    int x,y;
    public:
    void get(){
        cout<<"enter the value of x and y";
        cin>>x>>y;

    }
    void show(){
        cout<<x<<" "<<y<<" ";
    }
    void sum()
    {
        int z= x+y;
        cout<<z;
    }

};
class subs: public add{
    int a,b;
    public:
    void get1(){
        get();
    cout<<"enter the value of a and b:";
    cin>>a>>b;
}
void show1(){
    show();
    cout<<a<<b;
}

};
class div:public subs{
    int p,q;
    public:
    void get2(){
        get1();
        cout<<"enter the value of p and q";
        cin>>p>>q;
    }
   void show2(){
    show1();
   cout<<p<<" "<<q<<" ";
}

};
int main()
{
    subs s;
    s.get1();
    s.show1();
    s.sum();
    return 0;
}