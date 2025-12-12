#include <iostream>
using namespace std;

int main() {
    int kecepatan;

    cout << "=== Drone Racing - Penentuan Level Kecepatan ===" << endl;
    cout << "Masukkan kecepatan drone (km/h): ";
    cin >> kecepatan;

    cout << "\nHasil: ";

    if (kecepatan < 40) {
        cout << "Level Basic" << endl;
    } 
    else if (kecepatan >= 40 && kecepatan <= 79) {
        cout << "Level Intermediate" << endl;
    }
    else if (kecepatan >= 80 && kecepatan <= 119) {
        cout << "Level Advanced" << endl; 
    }
    else if (kecepatan >= 120) {
        cout << "Level Ultra" << endl;
    } 
    else {
        cout << "Input tidak valid." << endl;
    }

    return 0;
}
