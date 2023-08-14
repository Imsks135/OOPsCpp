#include<bits/stdc++.h>
using namespace std;
#define ll long long int;
#define inf 1e9;
#define mod 1000000007;
#define N 200100;
class Address{
    public:
    int age;
    string city;
    string state;
    Address(int age,string city,string state){
        this->age=age;
        this->city=city;
        this->state=state;
    }
};
class employee{
    private:
    Address*address;
    public:
    int id;
    string location;
    employee(int id,string location,Address*address){
        this->id=id;
        this->location=location;
        this->address=address;
    }
    void display(){
        cout<<id<<" "<<location<<" "<<address->age<<" "<<address->city<<" "<<address->state;
    }
};
int main() 
{
  //ios_base::sync_with_stdio(false);
  //cin.tie(NULL);
  Address A=Address(22,"varanasi","uttarpradesh");
  employee e(87578,"bengaluru",&A);
  e.display();
  return 0;
}