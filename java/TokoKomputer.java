public class TokoKomputer extends TokoElektronik {
    private String kodePC;
    private String spesifikasiPC;
    private String hargaPC;

    public TokoKomputer() {}

    // Setter & Getter
    public void setKodePC(String kodePC) {
        this.kodePC = kodePC;
    }
    public String getKodePC() {
        return kodePC;
    }

    public void setSpesifikasiPC(String spesifikasiPC) {
        this.spesifikasiPC = spesifikasiPC;
    }
    public String getSpesifikasiPC() {
        return spesifikasiPC;
    }

    public void setHargaPC(String hargaPC) {
        this.hargaPC = hargaPC;
    }
    public String getHargaPC() {
        return hargaPC;
    }

    // Add data komputer
    public void addDataKomputer(String namaToko, String alamatToko, String notelToko,
                                String kodePC, String spesifikasiPC, String hargaPC) {
        super.addData(namaToko, alamatToko, notelToko);
        this.kodePC = kodePC;
        this.spesifikasiPC = spesifikasiPC;
        this.hargaPC = hargaPC;
        System.out.println("Data Komputer berhasil ditambah!");
    }
}
