#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define inf 1e9;
#define mod 1000000007;
#define N 200100;
class Animal{
  public:
  void eat(){
    cout<<"eating"<<endl;
  }
};
class dog:public Animal{
    public:
    void bark(){
        cout<<"barking";
    }
};
int main() 
{
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  dog d;
  d.eat();
  d.bark();
  return 0;
}