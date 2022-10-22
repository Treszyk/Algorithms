#include<iostream>
using namespace std;

bool* sieve_of_eratosthenes(int n) {
    bool* tab = new bool[n+1]{0};
    for(int p=2; (p*p)<=n; p++) {
        if(!tab[p]) {
            for(int i=p*p; i<=n; i+=p) {
                tab[i] = true;
            }
        }
    }
    return tab;
}
int main() {
    int n = 53;
    bool* tab = sieve_of_eratosthenes(n);
    for(int i=2; i<=n; i++) {
        if(!tab[i]){
            cout<<i<<endl;
        }  
    }
}