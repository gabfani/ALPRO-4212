#include <iostream>

using namespace std;

struct point{
    int x, y, jmlh;
};
struct point vpoint1;

struct luasPP{
    int p, l;
};luasPP luasPersegiPanjang;

struct luasL{
    int phi = 3.14;
    int r;
};luasL luasLingkaran;

struct volK{
    int phi = 3.14;
    int r, t;
    int kuadrat;
}; volK volumeKerucut;

struct volB{
    int phi = 3.14;
    int r;
    int kubik;
}; volB volumeBola;

struct sepeda {
  string merk;
  string type;
  int tahun;
  string harga;
}; sepeda sepedaGunung;

int main()
{
    vpoint1.x=5;
    vpoint1.y=7;
    vpoint1.jmlh=vpoint1.x+vpoint1.y;
    luasPersegiPanjang.p=15;
    luasPersegiPanjang.l=5;
    luasLingkaran.r=7;
    volumeKerucut.r=7;
    volumeKerucut.t=12;
    volumeKerucut.kuadrat=volumeKerucut.r*volumeKerucut.r;
    volumeBola.r=7;
    volumeBola.kubik=volumeBola.r*volumeBola.r*volumeBola.r;
    sepedaGunung.merk = "Polygon";
    sepedaGunung.type = "Sepeda Gunung";
    sepedaGunung.tahun = 2013;
    sepedaGunung.harga = "2.000.000";
    cout << "Luas Persegi Panjang: " << luasPersegiPanjang.p*luasPersegiPanjang.l << endl;
    cout << "Luas Lingkaran: " << luasLingkaran.phi*luasLingkaran.r*luasLingkaran.r << endl;
    cout << "Volume Kerucut: " << 0.3*volumeKerucut.phi*volumeKerucut.kuadrat*volumeKerucut.t<< endl;
    cout << "Volume Bola: " << 1.3*volumeBola.phi*volumeBola.kubik<< endl;
    cout << "Merk: " << sepedaGunung.merk << endl;
    cout << "Tipe: " << sepedaGunung.type << endl;
    cout << "Tahun: " << sepedaGunung.tahun << endl;
    cout << "Harga: " << sepedaGunung.harga << endl;
    cout << vpoint1.jmlh << endl;
    return 0;
}
