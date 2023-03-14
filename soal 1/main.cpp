#include <iostream>

using namespace std;

/*
1. fungsi penjumlahan 2 bilangan
2. fungsi pengurangan 2 bilangan
3. fungsi untuk menghitung jumlah nilai total dari sebuah arrray
4. fungsi menghitung rata-rata dari array tsb
*/



// Fungsi penjumlahan
int jumlah(int a, int b) {
   return a + b;
}

// Fungsi pengurangan
int kurang(int a, int b) {
   return a - b;
}

// Fungsi menghitung total dan rata-rata array
void hitungTotalDanRata(int arr[], int &total, float &rata) {
   total = 0;
   for (int i = 0; i < 5; i++) {
      total += arr[i];
   }
   rata = (float) total / 5;
}

int main() {
   // fungsi penjumlahan dan pengurangan
   int a, b;
   cout << "-------Input Bilangan------ \n";
   cout << "Bil 1: ";
   cin >> a;
   cout << "Bil 2: ";
   cin >> b;
   cout << "Hasil penjumlahan: " << jumlah(a, b) << endl;
   cout << "=====================================\n";
   cout << "Hasil pengurangan: " << kurang(a, b) << endl;
   cout << "=====================================\n";

   // Contoh penggunaan fungsi hitungTotalDanRata-rata
   int arr[] = {17, 21, 36, 47, 53};
   //int n = sizeof(arr) / sizeof(arr[0]);
   int total;
   float rata;
   hitungTotalDanRata(arr,  total, rata);
   cout << "------Hitung Total dan Rata-rata------\n";
   cout << "        {17, 21, 36, 47, 53} \n";
   cout << "Total elemen dalam array: " << total << endl;
   cout << "=====================================\n";
   cout << "Rata-rata elemen dalam array: " << rata << endl;

   return 0;
}
