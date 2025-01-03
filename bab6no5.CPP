#include <iostream.h>
#include <conio.h>

int main()
{
    clrscr();

    int n = 5; // Jumlah baris segitiga
    int sum_total = 0;

    for (int i = n; i >= 1; i--)
    {
        int sum_row = 0;
        for (int j = 1; j <= i; j++)
        {
            int even = (n * 2) - ((j - 1) * 2);
            sum_row += even;
            cout << even;
            if (j < i)
            {
                cout << " + ";
            }
        }
        sum_total += sum_row;
        cout << " = " << sum_row << endl;
    }

    cout << "---------- +" << endl;
    cout << "Total = " << sum_total << endl;

    getch();
}