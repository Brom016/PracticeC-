/*
SOAL
Buatlah program untuk membalik kata berikut ini:
Teknik Informatika Universitas Wahid Hasyim 
*/
#include <iostream.h>
#include <conio.h>
#include <string.h>

void reverseWord(char *word) 
{
    int start = 0;
    int end = strlen(word) - 1;
    char temp;

    while (start < end) 
    {
        temp = word[start];
        word[start] = word[end];
        word[end] = temp;
        start++;
        end--;
    }
}

void main() 
{
    clrscr();

    char kalimat[] = "Teknik Informatika Universitas Wahid Hasyim";
    char *kata[10];
    int i = 0;

    //Memisahkan kalimat menjadi kata-kata
    kata[i] = strtok(kalimat, " ");
    while (kata[i] != NULL) 
    {
        i++;
        kata[i] = strtok(NULL, " ");
    }

    for (int j = i - 1; j >= 0; j--) 
    {
        reverseWord(kata[j]);  //revers kata
        cout << kata[j] << " ";  //output
    }

    getch();
}

