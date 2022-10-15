#include<iostream>
using namespace std;

bool is_number_prime(int n) {
    if(n<2)
        return false;
    for(int i=2; i*i<=n; i++) 
    {
        //cout<<i<<endl;
        if(n%i==0) 
            return false;
    }   
    return true;
}
int main() {
    int n = 23;
    cout<<is_number_prime(n)<<endl;

}