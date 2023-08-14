#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define inf 1e9;
#define mod 1000000007;
#define N 200100;
class Animal{
    public:
    void display(){
        cout<<"This is animal class";
    }
};
class Dog:public Animal{
    public:
    void display(){
        cout<<"This is derived class Dog from base class Animal";
    }
};
int main() 
{
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  //code here;
  Dog d=Dog();
  d.display();
  return 0;
}