#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    srand(time(0));
    rand();

    //-----------------------------------------------------
    // 1. Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от 0 до 20. 
    // Определить сумму элементов массива, среднее арифметическое, минимальный и максимальный элемент.

    const int ROWS = 5;
    const int COLUMNS = 6;
    int arr[ROWS][COLUMNS];

    int sum = 0;
    int minEl;
    int maxEl;

    cout << "Массив:\n";
    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLUMNS; j++) 
        {
            arr[i][j] = rand() % 21;
            cout << arr[i][j] << "\t";

            sum += arr[i][j];

            if (i == 0 && j == 0) 
            {
                minEl = arr[i][j];
                maxEl = arr[i][j];
            }

            if (arr[i][j] < minEl) 
            {
                minEl = arr[i][j];
            }
            if (arr[i][j] > maxEl) 
            {
                maxEl = arr[i][j];
            }
        }
        cout << "\n";
    }

    double average = static_cast<double>(sum) / (ROWS * COLUMNS);

    cout << "\nСумма всех элементов массива: " << sum << "\n";
    cout << "AVG: " << average << "\n";
    cout << "Минимальный элемент: " << minEl << "\n";
    cout << "Максимальный элемент: " << maxEl << "\n";

    //-----------------------------------------------------
    // 2. Дан двумерный массив размерностью M х M, заполненный случайными числами из диапазона от 0 до 20. 
    // Определить сумму элементов, расположенных на главной диагонали, а также сумму элементов, расположенных на побочной диагонали.

    const int M = 5;
    int arr[M][M];

    int mainSum = 0;
    int secondarySum = 0;

    cout << "Массив:\n";
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < M; j++)
        {
            arr[i][j] = rand() % 21;
            cout << arr[i][j] << "\t";

            if (i == j)
            {
                mainSum += arr[i][j];
            }
            if (i == M - 1 - j)
            {
                secondarySum += arr[i][j];
            }
        }
        cout << "\n";
    }
    cout << "\nСумма элементов на главной диагонали: " << mainSum << "\n";
    cout << "Сумма элементов на побочной диагонали: " << secondarySum << "\n";

    //-----------------------------------------------------
    // 3. Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от -10 до 10. 
    // Определить количество положительных, отрицательных и нулевых элементов.

    const int ROWS = 5;
    const int COLUMNS = 6;
    int arr[ROWS][COLUMNS];

    int posCount = 0;
    int negCount = 0;
    int zeroCount = 0;

    cout << "Массив:\n";
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            arr[i][j] = rand() % 21 - 10;
            cout << arr[i][j] << "\t";

            if (arr[i][j] > 0)
            {
                posCount++;
            }
            else if (arr[i][j] < 0)
            {
                negCount++;
            }
            else
            {
                zeroCount++;
            }
        }
        cout << "\n";
    }

    cout << "\nКол-во положительных элементов: " << posCount << "\n";
    cout << "Кол-во отрицательных элементов: " << negCount << "\n";
    cout << "Кол-во нулевых элементов: " << zeroCount << "\n";

    //-----------------------------------------------------
    // 4. Дан двумерный массив размерностью M х N, заполненный случайными числами из диапазона от 0 до 20. 
    // Определить сумму по каждой строке и по каждому столбцу массива. 

    const int ROWS = 5;
    const int COLUMNS = 6;
    int arr[ROWS][COLUMNS];

    int sum = 0;

    cout << "Массив:\n";
    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLUMNS; j++) 
        {
            arr[i][j] = rand() % 21;
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }

    cout << "\nСумма по каждой строке:\n";
    for (int i = 0; i < ROWS; i++)
    {
        int rowSum = 0;
        for (int j = 0; j < COLUMNS; j++)
        {
            rowSum += arr[i][j];
        }
        cout << "Строка " << i + 1 << ": " << rowSum << "\n";
    }

    cout << "\nСумма по каждому столбцу:\n";
    for (int j = 0; j < COLUMNS; j++)
    {
        int colSum = 0;
        for (int i = 0; i < ROWS; i++)
        {
            colSum += arr[i][j];
        }
        cout << "Столбец " << j + 1 << ": " << colSum << "\n";
    }

    //-----------------------------------------------------
    // 5. Заполнить массив M x N двузначными числами так, чтобы первая цифра указывала  номер строки, а вторая – номер столбца.

    const int ROWS = 5;
    const int COLUMNS = 4;
    int arr[ROWS][COLUMNS];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            arr[i][j] = i * 10 + j;
        }
    }

    cout << "Массив:\n";
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            if (arr[i][j] < 10) 
            {
                cout << "0" << arr[i][j] << "\t";
            }
            else 
            {
                cout << arr[i][j] << "\t";
            }
        }
        cout << "\n";
    }

    //-----------------------------------------------------
    // 6. В двумерном массиве размерности M x N поменять местами чётные строки с нечётными. 

    const int ROWS = 6;
    const int COLUMNS = 4;
    int arr[ROWS][COLUMNS];

    cout << "Исходный массив:\n";
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            arr[i][j] = rand() % 20;
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }

    for (int i = 0; i < ROWS - 1; i += 2) 
    {
        for (int j = 0; j < COLUMNS; j++) 
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i + 1][j];
            arr[i + 1][j] = temp;
        }
    }

    cout << "\nМассив после замены чётных строк с нечётными:\n";
    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLUMNS; j++) 
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }

    //-----------------------------------------------------
    // 7.Заполнить массив M x N следующим образом: по строчно 1-6, 7-12, 13-18, 19-24, 25-30

    const int ROWS = 5;
    const int COLUMNS = 6;
    int arr[ROWS][COLUMNS];

    int count = 1;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            arr[i][j] = count;
            count++;
        }
    }

    cout << "Массив:\n";
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLUMNS; j++)
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }

    //-----------------------------------------------------
    // 8. Заполнить массив M x N следующим образом: по строчно 1-6, 12-7, 13-18, 24-19, 25-30

    const int ROWS = 5;
    const int COLUMNS = 6;
    int arr[ROWS][COLUMNS];

    int count = 1;

    for (int i = 0; i < ROWS; i++)
    {
        if (i % 2 == 0) 
        {
            for (int j = 0; j < COLUMNS; j++)
            {
                arr[i][j] = count;
                count++;
            }
        }
        else 
        {
            for (int j = COLUMNS - 1; j >= 0; j--)
            {
                arr[i][j] = count;
                count++;
            }
        }
    }

    cout << "Массив:\n";
    for (int i = 0; i < ROWS; i++) 
    {
        for (int j = 0; j < COLUMNS; j++) 
        {
            cout << arr[i][j] << "\t";
        }
        cout << "\n";
    }
}

