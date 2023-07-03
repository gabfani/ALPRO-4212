#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Fungsi Selection Sort
void selectionSort(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        // Mencari elemen terkecil dalam bagian belum terurut
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        // Menukar elemen terkecil dengan elemen pertama dalam bagian belum terurut
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    vector<int> arr = {6, 4, 2, 7, 12, 9, 5};

    cout << "Array sebelum Selection Sort: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Mengukur waktu mulai
    auto start = high_resolution_clock::now();

    // Memanggil fungsi Selection Sort
    selectionSort(arr);

    // Mengukur waktu selesai
    auto end = high_resolution_clock::now();

    cout << "Array setelah Selection Sort: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Menghitung durasi dalam mikrodetik
    auto duration = duration_cast<microseconds>(end - start);

    cout << "Waktu eksekusi: " << duration.count() << " mikrodetik" << endl;

    return 0;
}
