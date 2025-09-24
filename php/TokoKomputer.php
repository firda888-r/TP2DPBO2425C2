<?php
require_once "TokoElektronik.php";

class TokoKomputer extends TokoElektronik {
    protected $kode_pc;
    protected $spek_pc;
    protected $harga_pc;

    public function __construct($nama="", $alamat="", $notel="", $kode="", $spek="", $harga="") {
        parent::__construct($nama, $alamat, $notel);
        $this->kode_pc = $kode;
        $this->spek_pc = $spek;
        $this->harga_pc = $harga;
    }

    public function getKodePC() { return $this->kode_pc; }
    public function getSpesifikasiPC() { return $this->spek_pc; }
    public function getHargaPC() { return $this->harga_pc; }

    public function addDataKomputer($nama, $alamat, $notel, $kode, $spek, $harga) {
        $this->addData($nama, $alamat, $notel);
        $this->kode_pc = $kode;
        $this->spek_pc = $spek;
        $this->harga_pc = $harga;
    }
}
?>
