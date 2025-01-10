#include <iostream.h>
#include <conio.h>

int main()
{
    clrscr();

    int rows = 5; // Jumlah baris segitiga
    int sum = 0;

    for (int i = 1; i <= rows; i++)
    {
        sum = 0;
        cout << "Baris " << i << ": ";

        for (int j = 1; j <= i; j++)
        {
            int even = j * 2;
            sum += even;
            cout << even;

            if (j < i)
            {
                cout << " + ";
            }
        }

        cout << " = " << sum << endl;
    }

    getch();
}
