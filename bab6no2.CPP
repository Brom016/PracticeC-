#include <iostream.h>
#include <conio.h>

int main()
{
    clrscr();

    int sum = 0;
    int n = 20; // Jumlah bilangan ganjil

    cout << "Deret bilangan genap: ";
    for (int i = 1; i <= n; i += 2)
    {
        int even = i * 1;
        sum += even;
        cout << even;

        if (i < n)
        {
            cout << " + ";
        }
    }

    cout << " = " << sum;
    getch();
}