
from collections import deque

# Membuat antrean awal
antrian = deque(["Budi", "Siti"])

# Roni masuk paling depan
antrian.appendleft("Roni")

# Dewi masuk paling belakang
antrian.append("Dewi")

# Melayani atau menghapus antrean paling depan
dilayani = antrian.popleft()

# Menampilkan hasil
print("Orang yang dilayani:", dilayani)
print("Sisa antrean:", list(antrian))
