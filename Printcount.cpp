include<iostream>
using namespace std;

//program of printing count til nth term
void printcount(int n){
    //base case
    if(n==0)
    return ;
    //Recursive call
    printcount(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"enter value of n to print count : ";
    cin>>n;

    printcount(n);
   
    return 0;
}
