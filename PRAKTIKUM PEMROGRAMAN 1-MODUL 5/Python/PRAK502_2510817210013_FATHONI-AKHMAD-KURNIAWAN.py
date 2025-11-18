def hitung(nilai1, nilai2):
    hasil = nilai1 - nilai2
    return abs(hasil)


def mutlak(angka):
    return abs(angka)


angka = list(map(int, input().split()))
a = angka[0]
c = angka[1]
b = angka[2]
d = angka[3]
hasil = hitung(a, b) + hitung(c, d)
print(mutlak(hasil))
