#include <iostream.h>
#include <conio.h>

int main()
{
    clrscr();

    int n = 5; // Jumlah baris segitiga siku
    int product = 1;

    for (int i = 1; i <= n; i++)
    {
        product = 1;
        cout << "1";
        for (int j = 2; j <= i; j++)
        {
            int odd = (j * 2) - 1;
            product *= odd;
            cout << " * " << odd;
        }
        if (i == 1)
        {
            product = 1;
        }
        else
        {
            product *= ((i * 2) - 1);
        }
        cout << " = " << product << endl;
    }

    getch();
}