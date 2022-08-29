#include<iostream>
using namespace std;
/*
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

}*/
/*
//program of say digit using recursion
void saydigit(int n, string arr[]){
    //base case
    if(n==0){
        return;
    }
    //processing
    int digit=n%10;
    n=n/10;
    //recursive call
    saydigit(n,arr);
    cout<<arr[digit]<<"  ";

}
int main(){
    string arr[10]={"zero","one","two","three","four","five",
    "six","seven","eight","nine"};
    int n;
    cout<<"enter the digit to say it : ";
    cin>>n;

   saydigit(n, arr);
    


    return 0;
}*/
/*
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
}*/
/*
//program of reaching home
void reachinghome(int src, int destination){
    cout<<"sorce"<<src<<"  "<<"destination"<< destination<<endl;
    
    //base case
    if(src==destination){
    cout<<"I have reached home";
    return;}
    
//recursive call
    reachinghome(src+1,destination);
   
}
int main(){
    int src=1;
    int destination=10;
    reachinghome(src,destination);

    return 0;
}*/

