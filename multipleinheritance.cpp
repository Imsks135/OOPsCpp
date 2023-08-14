#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define inf 1e9;
#define mod 1000000007;
#define N 200100;
class A{
    protected:
    int a;
    public:
    void get_a(int n){
        a=n;
    }
};
class B{
    protected:
    int b;
    public:
    void get_b(int n){
        b=n;
    }
};
class C:public A,public B{
    public:
    void display(){
        cout<<"value of a is:"<<a<<endl;
        cout<<"value of b is:"<<b<<endl;
        cout<<"sum of a and b is:"<<a+b;
    }
};
int main() 
{
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  C c;
  c.get_a(1);
  c.get_b(2);
  c.display();
  return 0;
}