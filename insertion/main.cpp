#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Fungsi Insertion Sort
void insertionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

        // Geser elemen-elemen yang lebih besar dari key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

int main() {
    vector<int> arr = {6, 4, 2, 7, 12, 9, 5};

    cout << "Array sebelum Insertion Sort: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Mengukur waktu mulai
    auto start = high_resolution_clock::now();

    // Memanggil fungsi Insertion Sort
    insertionSort(arr);

    // Mengukur waktu selesai
    auto end = high_resolution_clock::now();

    cout << "Array setelah Insertion Sort: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Menghitung durasi dalam mikrodetik
    auto duration = duration_cast<microseconds>(end - start);

    cout << "Waktu eksekusi: " << duration.count() << " mikrodetik" << endl;

    return 0;
}
