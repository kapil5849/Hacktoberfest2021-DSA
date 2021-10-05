#include<iostream>
using namespace std;

// recursion function...
int factorial(int n){
    if(n==0){
        return 1;
    }
    return n*factorial(n-1);
}

// main function...
int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}
