/*
SOAL
Tentukan apa hasil numerik dari ekspresi relasi dan logika dibawah ini. Diberikan
nilai A = 3; B = 6 ; C = 2 ; K = 5; L = 4; M = 3
a.  D = (4 + 2 > A && B – 2 > 3 + 2 || B + 2 <= 6 + 2 )
b.  D=K + 5 < M || (C * M < L && 2 * M – L > 0)
c.  D=L + 5 < M || C * K <  L && 2 * K – L > 0
d.  D=A * 4 <= 3 * M + B
e.  D=K + 10 > A && L – 2 > 4 * C
*/

#include <iostream.h>
#include <conio.h>

int main()
{
    int A = 3, B = 6, C = 2, K = 5, L = 4, M = 3;
    bool D;

    clrscr();
    cout << "PROGRAM MENENTUKAN HASIL NUMERIK EKSPRESI RELASI DAN LOGIKA\n";

    // A
    D = (4 + 2 > A && B - 2 > 3 + 2 || B + 2 <= 6 + 2);
    cout << "a. D = (4 + 2 > A && B - 2 > 3 + 2 || B + 2 <= 6 + 2)\n";
    cout << "   Hasil: " << D << "\n";

    // B
    D = K + 5 < M || (C * M < L && 2 * M - L > 0);
    cout << "b. D = K + 5 < M || (C * M < L && 2 * M - L > 0)\n";
    cout << "   Hasil: " << D << "\n";

    // C
    D = L + 5 < M || C * K < L && 2 * K - L > 0;
    cout << "c. D = L + 5 < M || C * K < L && 2 * K - L > 0\n";
    cout << "   Hasil: " << D << "\n";

    // D
    D = A * 4 <= 3 * M + B;
    cout << "d. D = A * 4 <= 3 * M + B\n";
    cout << "   Hasil: " << D << "\n";

    // E
    D = K + 10 > A && L - 2 > 4 * C;
    cout << "e. D = K + 10 > A && L - 2 > 4 * C\n";
    cout << "   Hasil: " << D << "\n";

    getch();
}
