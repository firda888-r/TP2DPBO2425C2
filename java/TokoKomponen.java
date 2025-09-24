public class TokoKomponen extends TokoKomputer {
    private String namaKomponen;
    private String merkKomponen;
    private String hargaKomponen;

    public TokoKomponen() {}

    // Setter & Getter
    public void setNamaKomponen(String namaKomponen) {
        this.namaKomponen = namaKomponen;
    }
    public String getNamaKomponen() {
        return namaKomponen;
    }

    public void setMerkKomponen(String merkKomponen) {
        this.merkKomponen = merkKomponen;
    }
    public String getMerkKomponen() {
        return merkKomponen;
    }

    public void setHargaKomponen(String hargaKomponen) {
        this.hargaKomponen = hargaKomponen;
    }
    public String getHargaKomponen() {
        return hargaKomponen;
    }

    // Add data komponen
    public void addDataKomponen(String namaToko, String alamatToko, String notelToko,
                                String kodePC, String spesifikasiPC, String hargaPC,
                                String namaKomponen, String merkKomponen, String hargaKomponen) {
        super.addDataKomputer(namaToko, alamatToko, notelToko, kodePC, spesifikasiPC, hargaPC);
        this.namaKomponen = namaKomponen;
        this.merkKomponen = merkKomponen;
        this.hargaKomponen = hargaKomponen;
    }
}
