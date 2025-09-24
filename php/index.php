<?php
require_once "TokoKomponen.php";

// 5 data awal hard code
$daftar = [
    new TokoKomponen("FirdaKomputer", "Jl. Merdeka No.10", "08123456789",
        "Lenovo90", "Intel i7 RAM 16GB SSD 512GB", "15000000",
        "Motherboard", "ASUS", "2500000", "Images/laptop1.jpg"),
    new TokoKomponen("CompvZone", "Jl. Sudirman No.5", "08987654321",
        "PCHP010", "Ryzen 5 RAM 8GB HDD 1TB", "10000000",
        "PSU", "NVIDIA", "4500000", "Images/laptop2.jpg"),
    new TokoKomponen("PutriPC", "Jl. Kemangi No.02", "0898943321",
        "legionD45", "Ryzen 5 RAM 16GB HDD 2TB", "12000000",
        "VGA Card", "NVIDIA", "400000", "Images/laptop3.jpg"),
    new TokoKomponen("mypc.berkah", "Jl. Lintas No.09", "0898880191",
        "Lenovo0ii7", "Intel Core i7 RAM 16GB HDD 3TB", "7000000",
        "SSD Card", "Microsoft", "2600000", "Images/laptop4.jpg"),
    new TokoKomponen("mypc.berkah", "Jl. Lintas No.09", "0898880191",
        "PCHP010", "Intel Core i7 RAM 16GB HDD 1TB", "7000000",
        "HDD Card", "NVIDIA", "500000", "Images/laptop5.jpg")
];

// inputan untuk user
if ($_SERVER["REQUEST_METHOD"] === "POST") {
    $nama   = $_POST["nama"];
    $alamat = $_POST["alamat"];
    $notel  = $_POST["notel"];
    $kode   = $_POST["kode"];
    $spek   = $_POST["spek"];
    $hargaPC= $_POST["hargaPC"];
    $jenis  = $_POST["jenis"];
    $merk   = $_POST["merk"];
    $hargaK = $_POST["hargaKomponen"];
    
    // untuk mengupload file foto
    $foto = "";
    if (isset($_FILES["foto"]) && $_FILES["foto"]["error"] == 0) {
        $foto = "Images/" . basename($_FILES["foto"]["name"]);
        move_uploaded_file($_FILES["foto"]["tmp_name"], $foto);
    }

    $daftar[] = new TokoKomponen($nama, $alamat, $notel, $kode, $spek, $hargaPC, $jenis, $merk, $hargaK, $foto);
}
?>
<!DOCTYPE html>
<html>
<head>
    <title>Daftar Toko Komponen</title>
    <style>
        table { border-collapse: collapse; width: 100%; }
        th, td { border: 1px solid black; padding: 8px; text-align: center; }
        th { background-color: #924b65ff; }
        img { width: 80px; height: auto; }
    </style>
</head>
<body>
<h2>Daftar Toko Komponen</h2>
<table>
    <tr>
        <th>Nama Toko</th><th>Alamat</th><th>No. Telp</th>
        <th>Kode PC</th><th>Spesifikasi</th><th>Harga PC</th>
        <th>Jenis Komponen</th><th>Merk Komponen</th><th>Harga Komponen</th><th>Foto Produk</th>
    </tr>
    <?php foreach ($daftar as $data): ?>
    <tr>
        <td><?= $data->getNama(); ?></td>
        <td><?= $data->getAlamat(); ?></td>
        <td><?= $data->getNotel(); ?></td>
        <td><?= $data->getKodePC(); ?></td>
        <td><?= $data->getSpesifikasiPC(); ?></td>
        <td><?= $data->getHargaPC(); ?></td>
        <td><?= $data->getJenisKomponen(); ?></td>
        <td><?= $data->getMerkKomponen(); ?></td>
        <td><?= $data->getHargaKomponen(); ?></td>
        <td>
            <?php if ($data->getFotoProduk()): ?>
                <img src="<?= $data->getFotoProduk(); ?>" alt="foto">
            <?php else: ?>
                -
            <?php endif; ?>
        </td>
    </tr>
    <?php endforeach; ?>
</table>
<h2>Tambah Data Baru</h2>

<form method="post" enctype="multipart/form-data">

    <label>Nama Toko</label><br>
    <input type="text" name="nama" placeholder="Masukkan Nama Toko" required><br><br>

    <label>Alamat</label><br>
    <input type="text" name="alamat" placeholder="Masukkan Alamat" required><br><br>

    <label>No. Telp</label><br>
    <input type="text" name="notel" placeholder="08xxxxxxxxxx" required><br><br>

    <label>Kode PC</label><br>
    <input type="text" name="kode" placeholder="Kode PC" required><br><br>

    <label>Spesifikasi</label><br>
    <textarea name="spek" rows="3" placeholder="Masukkan Spesifikasi PC" required></textarea><br><br>

    <label>Harga PC</label><br>
    <input type="number" name="hargaPC" placeholder="Masukkan Harga PC" required><br><br>

    <label>Jenis Komponen</label><br>
    <input type="text" name="jenis" placeholder="RAM / VGA / HDD" required><br><br>

    <label>Merk Komponen</label><br>
    <input type="text" name="merk" placeholder="Masukkan Merk Komponen" required><br><br>

    <label>Harga Komponen</label><br>
    <input type="number" name="hargaKomponen" placeholder="Masukkan Harga Komponen" required><br><br>

    <label>Foto Produk</label><br>
    <input type="images" name="foto"><br><br>

    <button type="submit">Simpan</button>
</p>
    </form>
</body>
</html>
