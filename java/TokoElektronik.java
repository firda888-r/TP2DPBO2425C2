public class TokoElektronik {
    protected String namaToko;
    protected String alamatToko;
    protected String notelToko;

    public TokoElektronik() {}

    // Setter & Getter
    public void setNama(String namaToko) {
        this.namaToko = namaToko;
    }
    public String getNama() {
        return namaToko;
    }

    public void setAlamat(String alamatToko) {
        this.alamatToko = alamatToko;
    }
    public String getAlamat() {
        return alamatToko;
    }

    public void setNotel(String notelToko) {
        this.notelToko = notelToko;
    }
    public String getNotel() {
        return notelToko;
    }

    // Method add data
    public void addData(String namaToko, String alamatToko, String notelToko) {
        this.namaToko = namaToko;
        this.alamatToko = alamatToko;
        this.notelToko = notelToko;
    }
}
