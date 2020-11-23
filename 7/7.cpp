#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    setlocale(0, "");
    int n, max,** Mas, i, j;
    cout << "Введите количество столбцов:";
    cin >> n;
    Mas = new int* [n];
    for (i = 0; i < n; i++)
        Mas[i] = new int[n];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            Mas[i][j] = rand() % 100;
            cout << Mas[i][j] << "\t";
        }
        cout << endl;
    }
    max = Mas[0][0];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (Mas[i][j] > max)
            {
                max = Mas[i][j];
            }
        }
    }
    cout << "\nМаксимальное = " << max << "\n";
    system("pause");

}