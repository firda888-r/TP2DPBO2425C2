from TokoKomponen import TokoKomponen

def cetak_tabel(daftar):
    headers = [
        "Nama Toko", "Alamat", "No. Telp",
        "Kode PC", "Spesifikasi", "Harga PC",
        "Jenis Komponen", "Merk Komponen", "Harga Komponen"
    ]

    # Ambil semua data (list of list)
    rows = []
    for t in daftar:
        rows.append([
            t.get_nama(), t.get_alamat(), t.get_notel(),
            t.get_kode_pc(), t.get_spesifikasi_pc(), t.get_harga_pc(),
            t.get_nama_komponen(), t.get_merk_komponen(), t.get_harga_komponen()
        ])

    # Hitung lebar kolom
    col_widths = []
    for i, h in enumerate(headers):
        max_len = max(len(str(row[i])) for row in rows) if rows else 0
        col_widths.append(max(len(h), max_len))

    # Fungsi garis
    def print_line():
        print("+" + "+".join("-" * (w + 2) for w in col_widths) + "+")

    # Cetak header
    print_line()
    print("|" + "|".join(f" {headers[i]:<{col_widths[i]}} " for i in range(len(headers))) + "|")
    print_line()

    # Cetak data
    for row in rows:
        print("|" + "|".join(f" {str(row[i]):<{col_widths[i]}} " for i in range(len(row))) + "|")
    print_line()

def main():
    # 5 data awal
    daftar = []

    t1 = TokoKomponen()
    t1.add_data_komponen("FirdaKomputer", "Jl. Merdeka No.10", "08123456789",
                         "Lenovo90", "Intel i7, RAM 16GB, SSD 512GB", "15000000",
                         "Motherboard", "ASUS", "2500000")
    daftar.append(t1)

    t2 = TokoKomponen()
    t2.add_data_komponen("CompvZone", "Jl. Sudirman No.9", "08987654321",
                         "PCHP010", "Ryzen 5, RAM 8GB, HDD 1TB", "10000000",
                         "PSU", "NVIDIA", "4500000")
    daftar.append(t2)

    t3 = TokoKomponen()
    t3.add_data_komponen("TekGENz", "Jl. balai raya No.5", "08097554321",
                         "Lenovo10", "Ryzen 7, RAM 16GB, HDD 1TB", "11000000",
                         "VGA Card", "NVIDIA", "1500000")
    daftar.append(t3)

    t4 = TokoKomponen()
    t4.add_data_komponen("CPU.com", "Jl. sersan bajuri No.7", "08887554321",
                         "Acer10", "Ryzen 7, RAM 8GB, HDD 1TB", "12000000",
                         "RAM", "NVIDIA", "200000")
    daftar.append(t4)

    t5 = TokoKomponen()
    t5.add_data_komponen("Apple", "Jl. jaksel No.1", "0809744321",
                         "MacBook", "CPU 14core, RAM 16GB, HDD 1TB", "15000000",
                         "GPU", "apple", "2800000")
    daftar.append(t5)


    # Input tambahan
    n = int(input("Berapa banyak data tambahan yang ingin dimasukkan? "))
    for i in range(n):
        print(f"\nInput data ke-{i+1}")
        nama = input("Nama Toko       : ")
        alamat = input("Alamat Toko     : ")
        notel = input("No. Telp        : ")
        kode = input("Kode PC         : ")
        spek = input("Spesifikasi PC  : ")
        hargaPC = input("Harga PC        : ")
        jenis = input("Nama Komponen   : ")
        merk = input("Merk Komponen   : ")
        hargaKomponen = input("Harga Komponen  : ")

        tmp = TokoKomponen()
        tmp.add_data_komponen(nama, alamat, notel, kode, spek, hargaPC, jenis, merk, hargaKomponen)
        daftar.append(tmp)

    print("\n\n=== DATA TOKO KOMPONEN ===\n")
    cetak_tabel(daftar)


if __name__ == "__main__":
    main()
