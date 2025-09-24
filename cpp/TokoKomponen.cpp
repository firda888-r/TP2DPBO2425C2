#include <iostream>
#include <string>
#include "TokoKomputer.cpp"

using namespace std;
class TokoKomponen : public TokoKomputer{
    protected:

    private:
        string Nama_komponen;
        string Merk_komponen;
        string Harga_komponen;

    public:
        TokoKomponen(){
        }

        //Get Set Jenis
        void setJenisKomponen(string Nama_komponen){
        this->Nama_komponen = Nama_komponen;
        }
        string getJenisKomponen(){
        return this->Nama_komponen;
        }

        //Get Set Merk
        void setMerkKomponen(string Merk_komponen){
        this->Merk_komponen = Merk_komponen;
        }
        string getMerkKomponen(){
        return this->Merk_komponen;
        }

        //Get Set Harga
        void setHargaKomponen(string Harga_komponen){
        this->Harga_komponen = Harga_komponen;
        }
        string getHargaKomponen(){
        return this->Harga_komponen;
        }

        //Method add data toko elektronik
        void addDataKomponen(string nama_toko, string alamat_toko, string notel_toko, string Kode_pc, string Spesifikasi_pc, string Harga_pc, string Nama_komponen, string Merk_komponen, string Harga_komponen) {
            this->addDataKomputer(nama_toko, alamat_toko, notel_toko, Kode_pc, Spesifikasi_pc, Harga_pc);
            this->Nama_komponen = Nama_komponen;
            this->Merk_komponen = Merk_komponen;
            this->Harga_komponen = Harga_komponen;
    
        }

    //Destructor
    ~TokoKomponen(){
    }
};//

