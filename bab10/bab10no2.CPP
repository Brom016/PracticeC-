#include <iostream.h>
#include <stdio.h>
#include <conio.h>

// Fungsi untuk konversi Fahrenheit ke Celcius dengan tipe double
double konversi(double f) {
    return (f - 32.0) * 5 / 9;
}

// Fungsi untuk konversi Fahrenheit ke Celcius dengan tipe float
float konversi(float f) {
    return (f - 32.0f) * 5 / 9;
}

// Fungsi untuk konversi Fahrenheit ke Celcius dengan tipe integer
int konversi(int f) {
    return (f - 32) * 5 / 9;
}

int main() {
    clrscr();

    double fahrenheit_double = 100.0;
    float fahrenheit_float = 100.0f;
    int fahrenheit_int = 100;

    // Pemanggilan dan proses dengan tipe double
    printf("Pemanggilan dengan tipe data double\n");
    printf("Proses dengan tipe data double\n");
    printf("%.1f sama dengan %.4f\n\n", fahrenheit_double, konversi(fahrenheit_double));

    // Pemanggilan dan proses dengan tipe float
    printf("Pemanggilan dengan tipe data float\n");
    printf("Proses dengan tipe data float\n");
    printf("%.1f sama dengan %.4f\n\n", fahrenheit_float, konversi(fahrenheit_float));

    // Pemanggilan dan proses dengan tipe integer
    printf("Pemanggilan dengan tipe data integer\n");
    printf("Proses dengan tipe data integer\n");
    printf("%d sama dengan %d\n", fahrenheit_int, konversi(fahrenheit_int));

    getch();
    return 0;
}
