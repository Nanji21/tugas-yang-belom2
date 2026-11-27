
#include <iostream>
#include <deque>
using namespace std;

int main() {
    // Membuat antrean awal
    deque<string> antrian = {"Budi", "Siti"};

    // Roni masuk paling depan
    antrian.push_front("Roni");

    // Dewi masuk paling belakang
    antrian.push_back("Dewi");

    // Melayani atau menghapus antrean paling depan
    string dilayani = antrian.front();
    antrian.pop_front();

    // Menampilkan hasil
    cout << "Orang yang dilayani: " << dilayani << endl;

    cout << "Sisa antrean: ";
    for (int i = 0; i < antrian.size(); i++) {
        cout << antrian[i];

        if (i < antrian.size() - 1) {
            cout << ", ";
        }
    }

    cout << endl;

    return 0;
}
