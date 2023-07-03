#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Fungsi Bubble Sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Membandingkan elemen sekarang dengan elemen berikutnya
            if (arr[j] > arr[j + 1]) {
                // Menukar elemen jika elemen sekarang lebih besar dari elemen berikutnya
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> arr = {6, 4, 2, 7, 12, 9, 5};

    cout << "Array sebelum Bubble Sort: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Mengukur waktu mulai
    auto start = high_resolution_clock::now();

    // Memanggil fungsi Bubble Sort
    bubbleSort(arr);

    // Mengukur waktu selesai
    auto end = high_resolution_clock::now();

    cout << "Array setelah Bubble Sort: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Menghitung durasi dalam mikrodetik
    auto duration = duration_cast<microseconds>(end - start);

    cout << "Waktu eksekusi: " << duration.count() << " mikrodetik" << endl;

    return 0;
}
