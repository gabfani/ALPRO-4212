#include <iostream>
using namespace std;

// Deklarasi fungsi
int maxA(int a, int b);
int minA(int a, int b);
void findMinMax(int arr[], int n, int& max, int& min);
bool isEven(int num);
bool isFactor(int a, int b);
void searchAngka(int arr[], int n, int num);
void countEvenOdd(int arr[], int n, int& count_even, int& count_odd);

int main() {
  int arr[50], n, max, min, num, count_even = 0, count_odd = 0, bilangan1, bilangan2;
  // Input 2 bilangan
  cout << "Masukkan nilai a: ";
  cin >> bilangan1;
  cout << "Masukkan nilai b: ";
  cin >> bilangan2;
  cout << "\n------------------------------------------ \n";
  // Cari max dan min
  int maxNilai = maxA(bilangan1,bilangan2);
  int minNilai = minA(bilangan1,bilangan2);

  //Output max dan min
  cout << "Nilai maksimum: " << maxNilai << endl;
  cout << "Nilai minimum: " << minNilai << endl;

  // Cari isFactor
  if (isFactor(bilangan1, bilangan2)) {
        cout << bilangan1 << " adalah faktor dari " << bilangan2 << endl;
    } else {
        cout << bilangan1 << " bukan faktor dari " << bilangan2 << endl;
    }
  cout << "\n========================================== \n";

  // Input ukuran array
  cout << "Masukkan ukuran array: ";
  cin >> n;

  // Input elemen array
  cout << "Masukkan elemen array:\n";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  cout << "\n------------------------------------------ \n";
  // Cari nilai maksimum dan minimum
  findMinMax(arr, n, max, min);

  // Output nilai maksimum dan minimum
  cout << "Nilai maksimum dalam array adalah: " << max << endl;
  cout << "Nilai minimum dalam array adalah: " << min << endl;
  cout << "\n------------------------------------------ \n";

  // Mencari bilangan tertentu dalam array
  cout << "Masukkan bilangan yang ingin dicari dalam array: ";
  cin >> num;
  searchAngka(arr, n, num);

  cout << "\n------------------------------------------ \n";
  // Output jumlah bilangan ganjil dan genap
  countEvenOdd(arr, n, count_even, count_odd);
  cout << "Jumlah bilangan ganjil dalam array adalah: " << count_odd << endl;
  cout << "Jumlah bilangan genap dalam array adalah: " << count_even << endl;
  cout << "\n========================================== \n";

  return 0;
}
// Definisi nilai max dan min
int maxA(int a, int b) {
    if (a > b) {
        return a;
    } else {
        return b;
    }
}

int minA(int a, int b) {
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

// Definisi fungsi findMinMax
void findMinMax(int arr[], int n, int& max, int& min) {
  max = arr[0];
  min = arr[0];
  for (int i = 0; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
    if (arr[i] < min) {
      min = arr[i];
    }
  }
}

// Definisi isFactor
bool isFactor(int a, int b) {
    if (b % a == 0) {
        return true;
    } else {
        return false;
    }
}

// Definisi fungsi isEven
bool isEven(int num) {
  if (num % 2 == 0) {
    return true;
  }
  else {
    return false;
  }
}

// Definisi fungsi searchNum
void searchAngka(int arr[], int n, int num) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == num) {
      cout << num << " ditemukan di indeks ke-" << i << endl;
      return;
    }
  }
  cout << num << " tidak ditemukan dalam array." << endl;
}

// Definisi fungsi countEvenOdd
void countEvenOdd(int arr[], int n, int& count_even, int& count_odd) {
  count_even = 0;
  count_odd = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i]%2==0) {
      count_even+=arr[i];
    }
    else {
      count_odd+=arr[i];
    }
  }
}
