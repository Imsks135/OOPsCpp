#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define inf 1e9;
#define mod 1000000007;
#define N 200100;
class A{
    public:
    int a;
    void get_a(){
        cout<<"you are in clas A"<<endl;
        cin>>a;
    }
};
class B:public A{
    public:
    int b;
    void get_b(){
        cout<<"you are in class B"<<endl;
        cin>>b;
    }
};
class C:public B{
   public:
   int c;
   void get_c(){
    cout<<"you are in class C"<<endl;
    cin>>c;
   }
};
class D:public C{
    public:
    void display(){
        get_a();
        get_b();
        get_c();
        cout<<"multiplication of a,b,c are:"<<a*b*c<<endl;
    }
};
int main() 
{
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  //code here;
  D d;
  d.display();
  return 0;
}