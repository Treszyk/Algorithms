#include<iostream>
using namespace std;

void findminmax(int& min, int& max, int arr[], int n) {
    min = max = arr[0];
    for(int i=1; i<n; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }
}

int main() {
    int n = 20;
    int arr[n] = {19, 6, 17, 14, 20, 16, 12, 2, 10, 13, 9, 18, 8, 7, 15, 5, 11, 13, 26, 4};
    int min, max;

    findminmax(min, max, arr, n);
    cout<<"Min: "<<min<<" Max: "<<max<<endl;

    return 0;
}