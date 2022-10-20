#include<iostream>
using namespace std;

bool is_perfect(long long int n) {
    long long int sum = 1;

    if(n<2)
        return false;

    for(long long int i=2; i*i<=n; i++) {   
        if(n%i == 0) 
            sum += i + n/i;
        if(i*i == n) 
            n -= i;
    }

    return sum == n;
}
int main() {
    long long int test_number = 137438691328; // it's the 7th perfect number
    cout << (is_perfect(test_number) ? "True" : "False") << endl;
    return 0;
}