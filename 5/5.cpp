#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int array[10][10], a, b;
    cout << "Введите количество строк: " << endl;
    cin >> a;
    cout << "Введите количество столбцов: " << endl;
    cin >> b;
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
    cout << "Подсчет количества нечетных элементов\n";
    int h = 0;
    int sum = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
            if (array[i][j] % 2 == 1)
            {
                h++;
                sum += array[i][j];
            }
    }
    cout << "Нечетных элементов = " << h << "\n" << "Их сумма = " << sum << "\n";
    system("pause");
}