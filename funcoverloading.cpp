#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define inf 1e9;
#define mod 1000000007;
#define N 200100;

class solve{
    public:
    int a;
    int b;
    string c;
    void display(int a,int b){
        this->a=a;
        this->b=b;
        cout<<a<<" "<<b<<endl;
    }
   void display(int a,int b,string c){
     this->a=a;
     this->b=b;
     this->c=c;
     cout<<a+b<<" "<<c;
   } 
};
int main() 
{
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  solve s;
  s.display(1,2);
  s.display(1,2,"satyam");
  return 0;
}