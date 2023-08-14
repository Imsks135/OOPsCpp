#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define inf 1e9;
#define mod 1000000007;
#define N 200100;

class A{
    public:
     void display(){  //for making virtual function write virtual void display)()
        cout<<"you are in base class";
    }
};
class B:public A{
    public:
    void display(){
        cout<<"you are in derived class B from class A";
    }
};
int main() 
{
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  A*a;  //base class pointer
  B b;  //derived class object
  a=&b;//storing adress of derived class B
  a->display();
  return 0;
}