//metode sorting bubble dan insertion

#include <iostream>

using namespace std;

void bubbleSort(int arr[], int n){
for (int i=0; i<n-1; i++){
    for (int j=0; j<n-i-1; i++){
        if(arr[j]<arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}
}

void insertionSort(int arr[], int n){
for (int i=0; i<=n; i++){
    int key = arr[i];
    int j = i-1;
    while (j>=0 &&arr[j] < key){
        arr[j+1] = arr[j];
        j--;
    } arr[j+1] = key;
}
}

int main()
{
    int arr[]={5,3,4,2,1,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    insertionSort(arr, n);
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
