#include <iostream>
using namespace std;

void print_fib(int n) {
    int a = 0, b = 1;
    for(int i=0; i<n; i++) {
        cout<<a<<" ";//this will cout the first 5 number of fibonacci sequence
        int pom = a + b;
        a = b;
        b = pom;
    }
    cout<<endl<<a;//this will cout the 5th number of fibonacci sequence starting from F0(which is the 0th number)
}

int print_fib_recurs(int n) {
    if(n<2) {
        return n;
    }

    return print_fib_recurs(n-2) + print_fib_recurs(n-1);
}

int main() {
    for(int i=0; i<9; i++) {
        cout<<print_fib_recurs(i)<<" ";//first 9 number using recursive
    }
    cout<<endl<<print_fib_recurs(9);//the 9th number using recursive
}