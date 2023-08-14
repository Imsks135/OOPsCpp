#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define inf 1e9;
#define mod 1000000007;
#define N 200100;
class solve{
      public:
      int num;
      solve(): num(6){};
      void operator ++(){
        num++;
      }
      void display(){
        cout<<num;
      } 
};
int main() 
{
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  solve s;
  ++s;
  s.display();
  return 0;
}