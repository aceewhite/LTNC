#include <iostream>
using namespace std;

void reverseArrayExtraArray(int arr[], int n) {
    int reversedArr[n];
    for (int i = 0; i < n; i++) {
        reversedArr[i] = arr[n - i - 1];
    }
    for (int i = 0; i < n; i++) {
        std::cout << reversedArr[i] << " ";
    }
}

int main() {
    int n;
    cin>>n;
    int originalArr[n];
    for(int i=0;i<n;i++){
        cin>>originalArr[i];
    }
    reverseArrayExtraArray(originalArr, n);
}

