
 // Membuat antrean awal
let antrian = ["Budi", "Siti"];

// Roni masuk paling depan
antrian.unshift("Roni");

// Dewi masuk paling belakang
antrian.push("Dewi");

// Melayani atau menghapus antrean paling depan
let dilayani = antrian.shift();

// Menampilkan hasil
console.log("Orang yang dilayani:", dilayani);
console.log("Sisa antrean:", antrian);
