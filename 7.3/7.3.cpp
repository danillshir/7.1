#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int array[10][10], a, b;
    cout << "Введите количество строк и столбцов (1 число): " << endl;
    cin >> a;
    b = a;
    cout << "Введите элементы массива: " << endl;
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
        {
            cin >> array[i][j];
        }
    cout << "Матрица:\n";
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
            cout << array[i][j] << "\t";
            cout << endl;
    }
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        sum += array[i][i];
    }
    cout << "Сумма = " << sum << "\n";
    system("pause");
}