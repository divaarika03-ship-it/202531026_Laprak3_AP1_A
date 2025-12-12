#include <iostream>
using namespace std;

int main() {
    int umur;
    
    cout << "=== Survival Camp - Level Peralatan ===\n";
    cout << "Masukkan umur peserta: ";
    cin >> umur;

    string peralatan;

    if (umur < 10) {
        peralatan = "Starter Kit";
    } else {
        if (umur <= 15) {
            peralatan = "Basic Gear";
        } else {
            if (umur <= 20) {
                peralatan = "Pro Gear";
            } else {
                peralatan = "Expert Gear";
            }
        }
    }

    cout << "Peralatan yang boleh digunakan: " << peralatan << endl;

    return 0;
}
