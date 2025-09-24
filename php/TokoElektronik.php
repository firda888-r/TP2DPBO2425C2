<?php
class TokoElektronik {
    protected $nama_toko;
    protected $alamat_toko;
    protected $notel_toko;

    public function __construct($nama = "", $alamat = "", $notel = "") {
        $this->nama_toko = $nama;
        $this->alamat_toko = $alamat;
        $this->notel_toko = $notel;
    }

    public function getNama() { return $this->nama_toko; }
    public function getAlamat() { return $this->alamat_toko; }
    public function getNotel() { return $this->notel_toko; }

    public function addData($nama, $alamat, $notel) {
        $this->nama_toko = $nama;
        $this->alamat_toko = $alamat;
        $this->notel_toko = $notel;
    }
}
?>
