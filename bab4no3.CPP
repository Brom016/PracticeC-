/*
SOAL
Buatlah program untuk menggabungkan dua buah string
Kalimat1 = Teknik
Kalimat2 = Informatika 
Menjadi seperti berikut:
TeknikInformatika 
*/
#include <iostream.h>
#include <conio.h>
#include <string.h>

int main() 
{
    //variabel string
    char kalimat1[] = "Teknik";
    char kalimat2[] = "Informatika";
    char hasil[50];

    //penggabungan 2 string
    strcpy(hasil, kalimat1); //copy kalimat1 ke ouput
    strcat(hasil, kalimat2); //add kalimat2 ke output

    //ooutput
    cout << hasil << endl;

    getch();
}
