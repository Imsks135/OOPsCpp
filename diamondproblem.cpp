#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define inf 1e9;
#define mod 1000000007;
#define N 200100;
class base{
    public:
    base(int x){
        cout<<"base(int) is called"<<endl;
    }
   /* base(){  
        cout<<"base() is called"<<endl;
    } This constructor is not commenetd when we will use the virtual keyword
    */
};
/* using virtual keyword to avoid two copies of base class
   like 
   class derived:virtual public base{}
   class derived1:virtual public base{}
*/
class derived:/*virtual*/ public base{
    public:
    derived(int x):base(x){
        cout<<"derived(int) is called"<<endl;
    }
};
class derived1:/*virtual*/public base{
    public:
    derived1(int x):base(x){
        cout<<"derived1(int)is called"<<endl;
    }
};
class result:public derived,public derived1{
    public:
    result(int x):derived1(x),derived(x){
        cout<<"result(int) is called"<<endl;
    }
};
int main() 
{
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  //code here;
   result r(30);
   return 0;
}