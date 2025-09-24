from TokoElektronik import TokoElektronik

class TokoKomputer(TokoElektronik):
    def __init__(self, kode_pc="", spesifikasi_pc="", harga_pc="", **kwargs):
        super().__init__(**kwargs)
        self.kode_pc = kode_pc
        self.spesifikasi_pc = spesifikasi_pc
        self.harga_pc = harga_pc

    # Getter & Setter
    def set_kode_pc(self, kode_pc):
        self.kode_pc = kode_pc

    def get_kode_pc(self):
        return self.kode_pc

    def set_spesifikasi_pc(self, spesifikasi_pc):
        self.spesifikasi_pc = spesifikasi_pc

    def get_spesifikasi_pc(self):
        return self.spesifikasi_pc

    def set_harga_pc(self, harga_pc):
        self.harga_pc = harga_pc

    def get_harga_pc(self):
        return self.harga_pc

    # Add data
    def add_data_komputer(self, nama_toko, alamat_toko, notel_toko, kode_pc, spesifikasi_pc, harga_pc):
        super().add_data(nama_toko, alamat_toko, notel_toko)
        self.kode_pc = kode_pc
        self.spesifikasi_pc = spesifikasi_pc
        self.harga_pc = harga_pc
        print("Data Komputer berhasil ditambah!")
