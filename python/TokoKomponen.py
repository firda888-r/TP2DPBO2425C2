from TokoKomputer import TokoKomputer

class TokoKomponen(TokoKomputer):
    def __init__(self, nama_komponen="", merk_komponen="", harga_komponen="", **kwargs):
        super().__init__(**kwargs)
        self.nama_komponen = nama_komponen
        self.merk_komponen = merk_komponen
        self.harga_komponen = harga_komponen

    # Getter & Setter
    def set_nama_komponen(self, nama_komponen):
        self.nama_komponen = nama_komponen

    def get_nama_komponen(self):
        return self.nama_komponen

    def set_merk_komponen(self, merk_komponen):
        self.merk_komponen = merk_komponen

    def get_merk_komponen(self):
        return self.merk_komponen

    def set_harga_komponen(self, harga_komponen):
        self.harga_komponen = harga_komponen

    def get_harga_komponen(self):
        return self.harga_komponen

    # Add data komponen
    def add_data_komponen(self, nama_toko, alamat_toko, notel_toko,
                          kode_pc, spesifikasi_pc, harga_pc,
                          nama_komponen, merk_komponen, harga_komponen):
        super().add_data_komputer(nama_toko, alamat_toko, notel_toko, kode_pc, spesifikasi_pc, harga_pc)
        self.nama_komponen = nama_komponen
        self.merk_komponen = merk_komponen
        self.harga_komponen = harga_komponen
