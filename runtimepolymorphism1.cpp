#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define inf 1e9;
#define mod 1000000007;
#define N 200100;
class shape{
    public:
    virtual void display(){
        cout<<"Drawing"<<endl;
    }
};
class rectangle:public shape{
    public:
    void display(){
        cout<<"Drawing rectangle"<<endl;
    }
};
class circle:public shape{
    public:
    void display(){
        cout<<"Drawing circle"<<endl;
    }
};
int main() 
{
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  shape *s; //base class pointer
  shape sh; //base class object
  s=&sh;   
  s->display();
  rectangle rec;  //derived class object
  s=&rec;
  s->display();
  circle circ;  //derived classs object
  s=&circ;
  s->display();
  return 0;
}