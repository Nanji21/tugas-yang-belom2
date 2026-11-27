
 // Membuat daftar lagu awal
let lagu = ["Ini Abadi", "Monokrom"];

// Menyisipkan lagu di tengah-tengah (indeks 1)
lagu.splice(1, 0, "everything u are");

// Menambahkan lagu di paling akhir
lagu.push("Aitakatta");

// Menghapus lagu pada urutan paling awal
lagu.shift();

// Menampilkan sisa lagu
console.log("Sisa daftar lagu:");
console.log(lagu);
