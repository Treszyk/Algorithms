#include<iostream>
using namespace std;

long long int factorial(int n) {
    long long int value = 1; //one because we multiply this value
    for(int i=1; i<=n; i++) {
        value*=i;
    }
    return value;
}

long long int factorial_rec(int n) {
    if(n<=1) {
        return 1;
    }
    return n * factorial_rec(n-1);
}

int main() {
    int n = 13;
    cout<<factorial_rec(n);
}