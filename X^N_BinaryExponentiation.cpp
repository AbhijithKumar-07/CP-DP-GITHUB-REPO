#include<bits/stdc++.h>
using namespace std;
// Tc -> O(logn)
int binaryexp(int x, int n){
    if(n==0){
        return 1;
    }
    if(n%2==0){
        return binaryexp(x*x, n/2);
    }
    else{     // Odd Power 2^5 = 2*2^4
        return x*binaryexp(x,n-1);
    }
}

int main(){
    int x,n;
    cin>>x>>n;
    cout<< binaryexp(x,n);  
    return 0;
}