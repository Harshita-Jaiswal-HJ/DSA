#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int size;
    cin>>size;
    
    int arr[size];
    for(int i=0;i<=size;i++){
        cin>>arr[i];
    }
    
    int start = 0;
    int end = size - 1;
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

    // Printing the reversed array
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    return 0;
}