#include<iostream>
using namespace std;

//program of fibonacci series using recursion
int fibonacci(int n){
    //base case
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    
    else{
        return (fibonacci(n-1)+fibonacci(n-2));
    }
    
  
}
int main(){
    int n,i=0;
    cout<<"enter value of n to print fibonacci series till nth tern : ";
    cin>>n;

    while(i<n){
        cout<<fibonacci(i)<<" ";
        i++;
    }
    return 0;

}
