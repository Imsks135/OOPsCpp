#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define inf 1e9;
#define mod 1000000007;
#define N 200100;
class box{
    private:
    int length;
    public:
    box():length(0){};
    friend int lengthofbox(box);
};
int lengthofbox(box b){
    b.length+=10;
    return b.length;
}
int main() 
{
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  box b;
  cout<<lengthofbox(b);
  return 0;
}