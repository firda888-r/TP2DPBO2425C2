#include <iostream>
#include <string>
#include "TokoElektronik.cpp"

using namespace std;
class TokoKomputer : public TokoElektronik{
    protected:

    private:
        string Kode_pc;
        string Spesifikasi_pc;
        string Harga_pc;

    public:
        TokoKomputer(){
        }

        //Get Set Kode
        void setKodePC(string Kode_pc){
        this->Kode_pc = Kode_pc;
        }
        string getKodePC(){
        return this->Kode_pc;
        }

        //Get Set Nama
        void setSpesifikasiPC(string Spesifikasi_pc){
        this->Spesifikasi_pc = Spesifikasi_pc;
        }
        string getSpesifikasiPC(){
        return this->Spesifikasi_pc;
        }

        //Get Set Harga
        void setHargaPC(string Harga_pc){
        this->Harga_pc = Harga_pc;
        }
        string getHargaPC(){
        return this->Harga_pc;
        }

        //Method add data toko elektronik
        void addDataKomputer(string nama_toko, string alamat_toko, string notel_toko, string Kode_pc, string Spesifikasi_pc, string Harga_pc) {
            this->addData(nama_toko, alamat_toko, notel_toko);
            this->Kode_pc = Kode_pc;
            this->Spesifikasi_pc = Spesifikasi_pc;
            this->Harga_pc = Harga_pc;
            cout <<"data berhasil ditambah!"<< endl;
        }

   
    //Destructor
    ~TokoKomputer(){
    }
};