import java.util.*;

public class Main {
    public static void main(String[] args) {
        // Buat 5 data awal
        List<TokoKomponen> daftar = new ArrayList<>();

        TokoKomponen t1 = new TokoKomponen();
        t1.addDataKomponen("FirdaKomputer", "Jl. Merdeka No.10", "08123456789",
                "Lenovo90", "Intel i7, RAM 16GB, SSD 512GB", "15000000",
                "Motherboard", "ASUS", "2500000");
        daftar.add(t1);

        TokoKomponen t2 = new TokoKomponen();
        t2.addDataKomponen("CompvZone", "Jl. Sudirman No.5", "08987654321",
                "HPi00", "Ryzen 5, RAM 8GB, HDD 1TB", "10000000",
                "PSU", "NVIDIA", "4500000");
        daftar.add(t2);

        TokoKomponen t3 = new TokoKomponen();
        t3.addDataKomponen("ComDD", "Jl. Sukamulus.5", "0891124321",
                "LegionP010", "Ryzen 3, RAM 16GB, HDD 1TB", "14000000",
                "CPU", "NVIDIA", "4000000");
        daftar.add(t3);

        TokoKomponen t4 = new TokoKomponen();
        t4.addDataKomponen("TokoKomputer.ku", "Jl. Gajahmada.8", "0808754321",
                "AsusP010", "intel core i3, RAM 16GB, HDD 1TB", "15500000",
                "Mother Board", "microsoft", "2000000");
        daftar.add(t4);

        TokoKomponen t5 = new TokoKomponen();
        t5.addDataKomponen("TokoKomputer.ku", "Jl. Gajahmada.8", "0821154321",
                "PCHP010", "intel core i7, RAM 16GB, HDD 2TB", "16000000",
                "CPU", "microsoft", "2500000");
        daftar.add(t5);


       

        // Input tambahan
        Scanner sc = new Scanner(System.in);
        System.out.print("Berapa banyak data tambahan yang ingin dimasukkan? ");
        int n = Integer.parseInt(sc.nextLine());

        for (int i = 0; i < n; i++) {
            System.out.println("\nInput data ke-" + (i+1));
            System.out.print("Nama Toko       : "); String nama = sc.nextLine();
            System.out.print("Alamat Toko     : "); String alamat = sc.nextLine();
            System.out.print("No. Telp        : "); String notel = sc.nextLine();
            System.out.print("Kode PC         : "); String kode = sc.nextLine();
            System.out.print("Spesifikasi PC  : "); String spek = sc.nextLine();
            System.out.print("Harga PC        : "); String hargaPC = sc.nextLine();
            System.out.print("Nama Komponen   : "); String jenis = sc.nextLine();
            System.out.print("Merk Komponen   : "); String merk = sc.nextLine();
            System.out.print("Harga Komponen  : "); String hargaKomponen = sc.nextLine();

            TokoKomponen tmp = new TokoKomponen();
            tmp.addDataKomponen(nama, alamat, notel, kode, spek, hargaPC, jenis, merk, hargaKomponen);
            daftar.add(tmp);
        }

        // Cetak tabel dengan garis dinamis
        System.out.println("\n\n=== DATA TOKO KOMPONEN ===\n\n");

        // Tentukan lebar tiap kolom
        int[] widths = {15, 20, 15, 10, 30, 10, 15, 15, 10};
        String[] headers = {"Nama Toko", "Alamat", "No. Telp", "Kode PC", "Spesifikasi",
                "Harga PC", "Jenis Komp", "Merk Komp", "Harga Komp"};

        // Fungsi bikin garis pemisah
        Runnable printLine = () -> {
            System.out.print("+");
            for (int w : widths) {
                for (int i = 0; i < w + 2; i++) System.out.print("-");
                System.out.print("+");
            }
            System.out.println();
        };

        // Cetak header
        printLine.run();
        System.out.print("|");
        for (int i = 0; i < headers.length; i++) {
            System.out.printf(" %-"+widths[i]+"s |", headers[i]);
        }
        System.out.println();
        printLine.run();

        // Cetak isi
        for (TokoKomponen t : daftar) {
            String[] row = {
                    t.getNama(), t.getAlamat(), t.getNotel(),
                    t.getKodePC(), t.getSpesifikasiPC(), t.getHargaPC(),
                    t.getNamaKomponen(), t.getMerkKomponen(), t.getHargaKomponen()
            };
            System.out.print("|");
            for (int i = 0; i < row.length; i++) {
                System.out.printf(" %-"+widths[i]+"s |", row[i]);
            }
            System.out.println();
        }
        printLine.run();
    } 
} 
