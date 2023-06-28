#include <iostream>

using namespace std;

typedef enum {
  MERAH,
  KUNING,
  HIJAU
} LampuLaluLintas;

int main()
{
     LampuLaluLintas lampu = MERAH;

  if (lampu == MERAH) {
    cout << "Lampu lalu lintas berwarna merah. Berhenti!" << endl;
  } else if (lampu == KUNING) {
    cout << "Lampu lalu lintas berwarna kuning. Harap siap-siap!" << endl;
  } else if (lampu == HIJAU) {
    cout << "Lampu lalu lintas berwarna hijau. Silakan lanjutkan perjalanan." << endl;
  } else {
    cout << "Lampu lalu lintas dalam kondisi tidak valid." << endl;
  }
  return 0;
}
