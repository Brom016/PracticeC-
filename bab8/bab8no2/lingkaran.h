#ifndef LINGKARAN_H
#define LINGKARAN_H

#define PI 3.14159

// Fungsi untuk menghitung luas lingkaran
inline double hitungLuas(double jariJari) {
    return PI * jariJari * jariJari;
}

// Fungsi untuk menghitung keliling lingkaran
inline double hitungKeliling(double jariJari) {
    return 2 * PI * jariJari;
}

#endif
