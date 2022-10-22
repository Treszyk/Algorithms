#include<iostream>
using namespace std;

int euclidean_GCD_iterative(int a, int b) {
    while(b) {
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

int euclidean_GCD_recursive(int a, int b) {
    if(b==0)
        return a;
    return euclidean_GCD_recursive(b, a%b); 
}

int main() {
    int a = 8460592, b = 324;
    cout<<euclidean_GCD_iterative(a, b)<<endl;
    cout<<euclidean_GCD_recursive(a, b)<<endl;
}