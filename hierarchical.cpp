#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define inf 1e9;
#define mod 1000000007;
#define N 200100;
class shape{
    public:
    int a,b;
    void get_data(int x,int y){
        a=x;
        b=y;
    }
};
class rectangle:public shape{
    public:
    int rec_area(){
        int result=a*b;
        return result;
    }
};
class triangle:public shape{
    public:
    float tri_area(){
        float result=0.5*a*b;
        return result;
    }
};
int main() 
{
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
   rectangle r;
   triangle t;
   r.get_data(3,5);
   cout<<r.rec_area()<<endl;
   t.get_data(5,7);
   cout<<t.tri_area();
   return 0;
}