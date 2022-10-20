#include<iostream>
#include<vector>
using namespace std;

vector<int> prime_factorization(long long int n) {
    vector<int> primes;
    long long int i = 2;

    while(n>1) {
        if(n%i==0) {
            primes.push_back(i);
            n/=i;
        } else {
            i++;  
        }      
    }
            
    return primes;
}
int main() {
    long long int number = 72000000000;
    long long int test = 1;
    vector<int> tab = prime_factorization(number);

    for(long long int i=0; i<tab.size(); i++) {
        cout << tab[i];
        test *= tab[i];
        if(i < tab.size()-1) {
            cout<<" * ";
        }
    }  

    cout<<" = "<<test;
}