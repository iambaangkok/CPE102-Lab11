#include<iostream>
using namespace std;
typedef long long int lli;

lli fibonacci(lli);

int main(){
    lli x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

lli fibonacci(lli n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}