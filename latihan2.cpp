
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Membuat daftar lagu awal
    vector<string> lagu = {"Ini Abadi", "Monokrom"};

    // Menyisipkan lagu di tengah-tengah (indeks 1)
    lagu.insert(lagu.begin() + 1, "everything u are");

    // Menambahkan lagu di paling akhir
    lagu.push_back("Aitakatta");

    // Menghapus lagu pada urutan paling awal
    lagu.erase(lagu.begin());

    // Menampilkan sisa lagu
    cout << "Sisa daftar lagu:" << endl;

    for (int i = 0; i < lagu.size(); i++) {
        cout << lagu[i] << endl;
    }

    return 0;
}
