
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Membuat tas inventaris
    vector<string> tas = {"Pedang Kayu", "Perisai Besi"};

    // Memasukkan Potion Darah di awal
    tas.insert(tas.begin(), "Potion Darah");

    // Memasukkan Busur Panah di indeks 2
    tas.insert(tas.begin() + 2, "Busur Panah");

    // Tas penuh, item paling akhir terpaksa dihapus
    tas.pop_back();

    // Menampilkan isi tas terakhir
    cout << "Isi tas inventaris:" << endl;

    for (int i = 0; i < tas.size(); i++) {
        cout << tas[i] << endl;
    }

    return 0;
}
