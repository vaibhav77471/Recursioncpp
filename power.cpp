#include<iostream>
using namespace std;


//program of finding power of n using recursion
int power(int n){
    //base case
    if(n==0)
    return 1;
    int smallerproblem=power(n-1);
    int biggerproblem= 2 * smallerproblem;
    return biggerproblem;
}
int main(){
    int n;
    cout<<"enter the value of power n : ";
    cin>>n;
    int ans=power(n);
    cout<<ans;
    return 0;
}
