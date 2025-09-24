#include <iostream>
#include <iomanip>
#include <vector>
#include "TokoKomponen.cpp"

using namespace std;
//
void printLine(vector<int> widths) {
    cout << "+";
    for (int w : widths) {
        cout << string(w, '-') << "+";
    }
    cout << endl;
}

int main() {
    // Buat 5 objek awal (hardcode)
    TokoKomponen TKN1, TKN2, TKN3, TKN4, TKN5;

    TKN1.addDataKomponen(
        "FirdaKomputer", "Jl. Merdeka No.10", "08123456789", //parent
        "Lenovo90", "Intel i7 RAM 16GB SSD 512GB", "15000000", //child
        "Motherboard", "ASUS", "2500000" //grandson
    );

    TKN2.addDataKomponen(
        "CompvZone", "Jl. Sudirman No.5", "08987654321",//parent
        "PCHP010", "Ryzen 5 RAM 8GB HDD 1TB", "10000000",//child
        "PSU", "NVIDIA", "4500000"//grandson
    );

    TKN3.addDataKomponen(
        "PutriPC", "Jl. Kemangi No.02", "0898943321", //parent
        "legionD45", "Ryzen 5 RAM 16GB HDD 2TB", "12000000",//child
        "VGA Card", "NVIDIA", "400000"//grandson
    );

    TKN4.addDataKomponen(
        "mypc.berkah", "Jl. lintas No.09", "0898880191", //parent
        "Lenovo0ii7", "intel core i7 RAM 16GB HDD 3TB", "7000000",//child
        "SSD Card", "Microsoft", "2600000"//grandson
    );

    TKN5.addDataKomponen(
        "mypc.berkah", "Jl. lintas No.09", "0898880191", //parent
        "PCHP010", "intel core i7 RAM 16GB HDD 1TB", "7000000",//child
        "HDD Card", "NVDIA", "500000"//grandson
    );

    // Simpan ke vector
    vector<TokoKomponen> daftar = {TKN1, TKN2, TKN3, TKN4, TKN5};

    // Input data tambahan
    int n;
    cout << "Berapa banyak data tambahan yang ingin dimasukkan? ";
    cin >> n;
    cin.ignore(); // buang newline biar getline aman

    for (int i = 0; i < n; i++) {
        cout << "\nInput data ke-" << i + 1 << endl;
        string nama, alamat, notel, kode, spek, hargaPC, jenis, merk, hargaKomponen;

        cout << "Nama Toko       : ";
        getline(cin, nama);
        cout << "Alamat Toko     : ";
        getline(cin, alamat);
        cout << "No. Telp        : ";
        getline(cin, notel);
        cout << "Kode PC         : ";
        getline(cin, kode);
        cout << "Spesifikasi PC  : ";
        getline(cin, spek);
        cout << "Harga PC        : ";
        getline(cin, hargaPC);
        cout << "Nama Komponen  : ";
        getline(cin, jenis);
        cout << "Merk Komponen   : ";
        getline(cin, merk);
        cout << "Harga Komponen  : ";
        getline(cin, hargaKomponen);

        TokoKomponen tmp;
        tmp.addDataKomponen(nama, alamat, notel, kode, spek, hargaPC, jenis, merk, hargaKomponen);
        daftar.push_back(tmp);
    }

// Lebar kolom
    vector<int> widths = {15, 20, 13, 12, 30, 12, 18, 15, 15};

    // Header tabel
    vector<string> headers = {
        "Nama Toko", "Alamat", "No. Telp",
        "Kode PC", "Spesifikasi", "Harga PC",
        "Jenis Komponen", "Merk Komponen", "Harga Komponen"
    };

    // Cetak tabel
    printLine(widths);
    cout << "|";
    for (int i = 0; i < headers.size(); i++) {
        cout << left << setw(widths[i]) << headers[i] << "|";
    }
    cout << endl;
    printLine(widths);

    for (auto &data : daftar) {
        cout << "|"
             << left << setw(widths[0]) << data.getNama()
             << "|" << left << setw(widths[1]) << data.getAlamat()
             << "|" << left << setw(widths[2]) << data.getNotel()
             << "|" << left << setw(widths[3]) << data.getKodePC()
             << "|" << left << setw(widths[4]) << data.getSpesifikasiPC()
             << "|" << left << setw(widths[5]) << data.getHargaPC()
             << "|" << left << setw(widths[6]) << data.getJenisKomponen()
             << "|" << left << setw(widths[7]) << data.getMerkKomponen()
             << "|" << left << setw(widths[8]) << data.getHargaKomponen()
             << "|" << endl;
        printLine(widths);
    }

    return 0;
}