#include<iostream>
#include<cmath>
using namespace std;

int binary_search_iterative(int arr[], int n, int target) { // binary search returns the position of the target element
    int L = 0;
    int R = n-1;
    while(L<=R) {
        int M = floor((L+R)/2);
        if(arr[M] == target)
            return M;
        else if(target > arr[M])
            L = M+1;
        else
            R = M-1;
    }
    return -1;
}

int binary_search_recursive(int arr[], int L, int R, int target) {
    if(L > R)
        return -1;

    int M = floor((L+R)/2);
    if(arr[M] == target)
        return M; 
    else if(target > arr[M])
        return binary_search_recursive(arr, M+1, R, target);
    else
        return binary_search_recursive(arr, L, M-1, target);   
}
int main() {
    int n = 10;
    int arr[n] = {1, 4, 6, 7, 8, 9, 13, 16, 17, 19};
    int target = 13;
    cout<<binary_search_iterative(arr, n, target)<<endl;
    cout<<binary_search_recursive(arr, 0, n-1, target)<<endl;
}