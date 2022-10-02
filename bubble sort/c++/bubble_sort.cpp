#include<iostream>
#include<iterator>
using namespace std;

void bubble_sort(int arr[], int n) {
    for(int i=0; i<n-1; i++) {
        bool swapped = false;
        cout<<i+1<<" pass"<<endl;
        for(int j=n-1; j>i; j--) {
            if(arr[j] > arr[j-1]) {
                int pom = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = pom;
                swapped = true;
            }
        }

        if(!swapped) {
            break;
        }
    }
}

int main() {
    int n = 5;
    int arr[n] = {5, 1, 4, 2, 8};
    bubble_sort(arr, n);

    for(int i=0; i<n; i++) {
        cout<< arr[i] << " ";
    }
}
