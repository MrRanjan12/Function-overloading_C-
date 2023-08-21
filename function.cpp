#include <iostream>
using namespace std;
float simpleIntrest(int principle,int rate,int time){
    return (principle*rate*time/100);
}
int factorial(int n){
    if(n<=1){
        return  1;
    }
    return n*factorial(n-1);
}
int main() {
    cout<<"Enter the value of the following p,r&t "<<endl;
    cout<<"Here y value is also for factorial "<<endl;
    int x,y,z;
    
    cin>>x>>y>>z;
   // cout<<"enter the value of p :"<endl;
  //  cin>>n;
    cout<<"simple interest :"<<simpleIntrest(x,y,z)<<endl;
    cout<<"the factorial of " << y<< " is "<<factorial(y);

    return 0;
}
