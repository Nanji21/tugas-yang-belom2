
// Membuat tas inventaris
let tas = ["Pedang Kayu", "Perisai Besi"];

// Memasukkan Potion Darah di awal
tas.splice(0, 0, "Potion Darah");

// Memasukkan Busur Panah di indeks 2
tas.splice(2, 0, "Busur Panah");

// Tas penuh, item paling akhir terpaksa dihapus
tas.pop();

// Menampilkan isi tas terakhir
console.log("Isi tas inventaris:");
console.log(tas);
