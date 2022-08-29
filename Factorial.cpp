#include<iostream>
using namespace std;

// program of print factorial of nth term

int factorial(int n){
    //base case
    if(n==0)
    return 1;
    
  //Recursive call
    return n * factorial(n-1);
}
int main(){
    int n;
    cout<<" enter the value of n to find factorial : ";
    cin>>n;

    int ans= factorial(n);
    cout<<ans;
    return 0;
}
