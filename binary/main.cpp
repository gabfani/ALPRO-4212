#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

// Fungsi binary search rekursif
int binarySearchRekursif(const vector<int>& arr, int target, int kiri, int kanan) {
    if (kiri <= kanan) {
        int tengah = kiri + (kanan - kiri) / 2;

        // Jika target ditemukan, kembalikan indeksnya
        if (arr[tengah] == target) {
            return tengah;
        }

        // Jika target lebih kecil, cari di setengah kiri
        if (arr[tengah] > target) {
            return binarySearchRekursif(arr, target, kiri, tengah - 1);
        }

        // Jika target lebih besar, cari di setengah kanan
        return binarySearchRekursif(arr, target, tengah + 1, kanan);
    }

    // Elemen target tidak ditemukan
    return -1;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target = 6;

    // Mengukur waktu mulai
    auto start = high_resolution_clock::now();

    int hasil = binarySearchRekursif(arr, target, 0, arr.size() - 1);

    // Mengukur waktu selesai
    auto end = high_resolution_clock::now();

    // Menghitung durasi dalam mikrodetik
    auto duration = duration_cast<microseconds>(end - start);

    if (hasil != -1) {
        cout << "Elemen ditemukan pada indeks " << hasil << endl;
    } else {
        cout << "Elemen tidak ditemukan dalam array" << endl;
    }

    cout << "Waktu eksekusi: " << duration.count() << " mikrodetik" << endl;

    return 0;
}
