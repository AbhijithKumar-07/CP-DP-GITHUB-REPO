#include<bits/stdc++.h>
using namespace std;
// Tc -> O(sqrt(n))
int main(){
    int n;
    cin>>n;
    int divisors=0;
    for(int i=1;i<=sqrt(n);i++){
        if(n%i==0){  
            // i is a divisor of n;
            divisors++;
            // If i is a divisor of n Then n/i is also a divisor of n;
        if(i*i != n){
            divisors++;
           }
        }
    }
    if(divisors==2) cout<<"Prime Number";
    else cout<< "Not A Prime!";
    return 0;
}

/*

int divisors=0;
for(int i=1;i<=sqrt(n);i++){
    if(n%i==0){
        // i is a divisor of n;
        int first_divisor = i;
        // If i is a divisor of n Then n/i is also a divisor of n;
        int second_divisor= n/i;
        if(first_divisor != second_divisor) divisors+=2;
        else divisors++;
    }
}
if(divisors==2) cout<<"Prime Number";

*/