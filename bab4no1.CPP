/*
SOAL
Buatlah program untuk menghitung panjang kata berikut ini:
Teknik Informatika Universitas Wahid Hasyim
*/
#include <iostream.h>
#include <conio.h>
#include <string.h>

void main()
{
    clrscr();

    char kalimat[] = "Teknik Informatika Universitas Wahid Hasyim";
    char *kata;
    int tPjng = 0;
    kata = strtok(kalimat, " ");

    while (kata != NULL)
    {
        cout << "Panjang kata '" << kata << "' adalah: " << strlen(kata) << endl;
        tPjng += strlen(kata);
        kata = strtok(NULL, " ");
    }

    cout << "\nTotal Panjang kata semua: " << tPjng << endl;

    getch();
}
