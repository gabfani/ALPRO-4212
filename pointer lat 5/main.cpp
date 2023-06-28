#include <iostream>

using namespace std;

struct Sepeda {
  string merk;
  string type;
  int tahun;
  string harga;
};

int main() {
  Sepeda sepedaGunung;

  Sepeda *ptrSepeda = &sepedaGunung;

  // Mengakses dan mengisi nilai member menggunakan pointer
  ptrSepeda->merk = "Polygon";
  ptrSepeda->type = "Sepeda Gunung";
  ptrSepeda->tahun = 2013;
  ptrSepeda->harga = "2.000.000";

  // Mengakses dan mencetak nilai member menggunakan pointer
  cout << "Merk: " << ptrSepeda->merk << endl;
  cout << "Tipe: " << ptrSepeda->type << endl;
  cout << "Tahun: " << ptrSepeda->tahun << endl;
  cout << "Harga: " << ptrSepeda->harga << endl;

  return 0;
}
