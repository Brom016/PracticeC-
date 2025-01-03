#include <iostream.h>
#include <conio.h>

int main()
{
    clrscr();

    int sum = 0;
    int n = 10; // Jumlah bilangan genap

    cout << "Deret bilangan genap: ";
    for (int i = 1; i <= n; i++)
    {
        int even = i * 2;
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