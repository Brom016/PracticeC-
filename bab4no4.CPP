/*
SOAL
Diberikan kalimat string berikut:
    Kalimat1 = "35.6"
    Kalimat2 = "12.5"
Kemudian kedua kalimat diatas dihitung menjadi perhitungan:
a. Perkalian
b. Pembagian
c. Penambahan
d. Pengurangan
e. Mencari sisa hasil pembagian
*/
#include <iostream.h>
#include <stdlib.h> //fungsi atof
#include <conio.h>

void main()
{
    char Kalimat1[] = "35.6";
    char Kalimat2[] = "12.5";

    float angka1 = atof(Kalimat1);
    float angka2 = atof(Kalimat2);

    // proses
    float times = angka1 * angka2;      // times = perkalian
    float divided = angka1 / angka2;    // divided = pembagian
    float plus = angka1 + angka2;       // plus = penambahan
    float minus = angka1 - angka2;      // minus = pengurangan
    int rq = (int)angka1 % (int)angka2; // remaining quotient = Hasil sisa Bagi

    // output
    cout << "Hasil Perkalian: " << times << endl;
    cout << "Hasil Pembagian: " << divided << endl;
    cout << "Hasil Penambahan: " << plus << endl;
    cout << "Hasil Pengurangan: " << minus << endl;
    cout << "Sisa Hasil Bagi: " << rq << endl;

    getch();
}
