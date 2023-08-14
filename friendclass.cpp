#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define inf 1e9;
#define mod 1000000007;
#define N 200100;
class A {
    int x=5;
    friend class B;
};
class B{
    public:
    void display(A &a){
        cout<<a.x;
    }
};
int main() 
{
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  A a;
  B b;
  b.display(a);
    return 0;
}