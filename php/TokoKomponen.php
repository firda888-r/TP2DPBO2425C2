<?php
require_once "TokoKomputer.php";

class TokoKomponen extends TokoKomputer {
    private $nama_komponen;
    private $merk_komponen;
    private $harga_komponen;
    private $foto_produk; // atribut baru KHUSUS PHP

    public function __construct(
        $nama="", $alamat="", $notel="", 
        $kode="", $spek="", $hargaPC="", 
        $jenis="", $merk="", $hargaKomponen="", $foto=""
    ) {
        parent::__construct($nama, $alamat, $notel, $kode, $spek, $hargaPC);
        $this->nama_komponen = $jenis;
        $this->merk_komponen = $merk;
        $this->harga_komponen = $hargaKomponen;
        $this->foto_produk = $foto;
    }

    public function getJenisKomponen() { return $this->nama_komponen; }
    public function getMerkKomponen() { return $this->merk_komponen; }
    public function getHargaKomponen() { return $this->harga_komponen; }
    public function getFotoProduk() { return $this->foto_produk; }

    public function addDataKomponen($nama, $alamat, $notel, $kode, $spek, $hargaPC, $jenis, $merk, $hargaKomponen, $foto) {
        $this->addDataKomputer($nama, $alamat, $notel, $kode, $spek, $hargaPC);
        $this->nama_komponen = $jenis;
        $this->merk_komponen = $merk;
        $this->harga_komponen = $hargaKomponen;
        $this->foto_produk = $foto;
    }
}
?>
