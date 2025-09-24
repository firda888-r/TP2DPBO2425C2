#include <string>
#include <iostream>
using namespace std;
class TokoElektronik{
    protected: //ini supaya atribut parent bisa diakses sama child
        string nama_toko;
        string alamat_toko;
        string notel_toko;

    public:
    TokoElektronik(){
    }
 //Get Set nama toko
    void SETNama(string nama_toko){
        this->nama_toko = nama_toko;
    }
    string getNama() {
        return this->nama_toko;
    }

    //Get Set alamat toko
    void SETAlamat(string alamat_toko){
        this->alamat_toko = alamat_toko;
    }
    string getAlamat() {
        return this->alamat_toko;
    }

    //Get Set nomor telepon
    void SETNotel(string notel_toko){
        this->notel_toko = notel_toko;
    }
     
    string getNotel() {
        return this->notel_toko;
    }

    //Method add data toko elektronik
    void addData(string nama_toko, string alamat_toko, string notel_toko) {
        this->nama_toko = nama_toko;
        this->alamat_toko = alamat_toko;
        this->notel_toko = notel_toko;
    }


    ~TokoElektronik() {

    }
};

