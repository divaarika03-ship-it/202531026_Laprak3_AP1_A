#include <iostream>
#include <string>
#include <cmath> // Untuk menggunakan fungsi ceil()

using namespace std;

int main() {
    // === 1. DEKLARASI VARIABEL ===
    int pilihanAlat;
    int durasiMenit;
    int tarifPer15Menit = 0; // Harga sewa alat per 15 menit, diinisialisasi 0
    double totalInterval;
    long long totalBiaya;
    string namaAlat;

    // === 2. INPUT DARI PENGGUNA (User Input) ===

    cout << "===========================================" << endl;
    cout << "    Selamat datang di ARENA GYM EQUIPMENT    " << endl;
    cout << "===========================================" << endl;
    cout << "Daftar Tarif Sewa Alat (Per 15 Menit):" << endl;
    cout << "1 => Dumbbell  : Rp 5.000" << endl;
    cout << "2 => Treadmill : Rp 10.000" << endl;
    cout << "3 => Barbell   : Rp 8.000" << endl;
    cout << "4 => Static Bike: Rp 7.000" << endl;
    cout << "-------------------------------------------" << endl;
    
    // Menerima pilihan alat (syarat no. 1)
    cout << "Masukkan Pilihan Alat (1-4): ";
    cin >> pilihanAlat;

    // Menerima durasi pemakaian (syarat no. 2)
    cout << "Masukkan Durasi Pemakaian (Menit): ";
    cin >> durasiMenit;
    cout << "-------------------------------------------" << endl;


    // === 3. PROSES 1: MENENTUKAN TARIF DENGAN SWITCH (syarat no. 3) ===

    switch (pilihanAlat) {
        case 1:
            namaAlat = "Dumbbell";
            tarifPer15Menit = 5000;
            break;
        case 2:
            namaAlat = "Treadmill";
            tarifPer15Menit = 10000;
            break;
        case 3:
            namaAlat = "Barbell";
            tarifPer15Menit = 8000;
            break;
        case 4:
            namaAlat = "Static Bike";
            tarifPer15Menit = 7000;
            break;
        default:
            // Jika pengguna memasukkan angka selain 1-4
            cout << "Pilihan alat tidak valid! Program dihentikan." << endl;
            return 1; // Keluar dengan kode error
    }

    // === 4. PROSES 2: MENGHITUNG INTERVAL DAN TOTAL BIAYA DENGAN LOOPING (syarat no. 4) ===

    // Langkah 1: Menghitung berapa banyak interval 15 menit (dibulatkan ke atas)
    // Misal: 45 menit / 15 = 3.0 interval
    // Misal: 16 menit / 15 = 1.066 -> dibulatkan ke atas jadi 2 interval

    // Gunakan ceil() untuk pembulatan ke atas, lalu dikonversi ke int
    totalInterval = ceil((double)durasiMenit / 15.0); 

    // Langkah 2: Menghitung Total Biaya menggunakan Looping
    // Kita anggap Looping di sini digunakan untuk mengulang perhitungan biaya sebanyak interval yang didapat.
    totalBiaya = 0; // Reset total biaya sebelum loop

    for (int i = 1; i <= totalInterval; ++i) {
        // Setiap kali loop, tambahkan tarif 15 menit ke total biaya
        totalBiaya = totalBiaya + tarifPer15Menit;
    }
    
    // *Catatan: Untuk kasus ini, perhitungan totalBiaya = (int)totalInterval * tarifPer15Menit akan lebih efisien. 
    // Namun, kita tetap menggunakan 'for loop' sesuai permintaan soal (syarat no. 4).

    // === 5. OUTPUT HASIL AKHIR ===

    cout << "\n========== DETAIL PERHITUNGAN ==========" << endl;
    cout << "Alat yang Dipilih: " << namaAlat << endl;
    cout << "Durasi Sewa     : " << durasiMenit << " Menit" << endl;
    cout << "Tarif Awal      : Rp " << tarifPer15Menit << " / 15 Menit" << endl;
    cout << "Jumlah Interval : " << (int)totalInterval << " x 15 Menit" << endl;
    cout << "----------------------------------------" << endl;
    cout << "TOTAL BIAYA SEWA: Rp " << totalBiaya << endl;
    cout << "========================================\n" << endl;


    return 0; // Program selesai dengan sukses
}
