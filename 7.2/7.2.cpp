#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int array[10][10], n, m;
    double otv, s = 0, b = 0;
    cout << "Введите количество строк: " << endl;
    cin >> n;
    cout << "Введите количество столбцов: " << endl;
    cin >> m;
    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
        {
            cin >> array[i][j];
            if (array[i][j] % 2 == 0)
            {
                s += array[i][j];
                b++;
            }
        }
    cout << "Матрица:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << array[i][j] << "\t";
        cout << endl;
    }
    otv = s / b;
    cout << "Среднее арифметическое четных элементов массива = " << otv << "\n";
    system("pause");
}