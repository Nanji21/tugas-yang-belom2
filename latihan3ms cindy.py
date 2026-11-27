# Membuat tas inventaris senjata
tas = ["Pedang Kayu", "Perisai Besi"]

# Memasukkan Potion Darah di awal
tas.insert(0, "Potion Darah")

# Memasukkan Busur Panah di indeks 2
tas.insert(2, "Busur Panah")

# Tas penuh, item paling akhir terpaksa dihapus
tas.pop()

# Menampilkan isi tas terakhir
print("Isi tas inventaris:")
print(tas)