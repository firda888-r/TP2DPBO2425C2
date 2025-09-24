class TokoElektronik:
    def __init__(self, nama_toko="", alamat_toko="", notel_toko=""):
        self.nama_toko = nama_toko
        self.alamat_toko = alamat_toko
        self.notel_toko = notel_toko

    # Getter & Setter
    def set_nama(self, nama_toko):
        self.nama_toko = nama_toko

    def get_nama(self):
        return self.nama_toko

    def set_alamat(self, alamat_toko):
        self.alamat_toko = alamat_toko

    def get_alamat(self):
        return self.alamat_toko

    def set_notel(self, notel_toko):
        self.notel_toko = notel_toko

    def get_notel(self):
        return self.notel_toko

    # Add data
    def add_data(self, nama_toko, alamat_toko, notel_toko):
        self.nama_toko = nama_toko
        self.alamat_toko = alamat_toko
        self.notel_toko = notel_toko
