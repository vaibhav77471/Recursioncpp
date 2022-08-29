#include<iostream>
using namespace std;

//program of climing stairs
int climb(int n){
    //base case
    if(n<0)
    return 0;
    if(n==0)
    return 1;
    //recursive call
    int ans= climb(n-1)+climb(n-2);
    return ans;
}
int main(){
    int n;
    cout<<"enter nth term of stairs :";
    cin>>n;

   int ans= climb(n);
   cout<<ans;

    return 0;
}
