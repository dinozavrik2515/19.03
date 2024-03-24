#include <Windows.h>
#include <iostream>
#include <cstdlib>
#include <time.h>

int main() 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    //1

    
    const int col = 10; 
    int arr[col]{}, min, max;
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 1000;
        std::cout << arr[i] << " ";
    }
    min = arr[0];
    max = arr[1];

    if (min > max)
    {
        max = min;
        min = arr[1];
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
        
    }
    std::cout << "\nmin = " << min << "\nmax = " << max;

    //2

    int arr[10], begin, end, num, sum = 0;
    std::cout << "Введите начало диапазона: ";
    std::cin >> begin;
    std::cout << "Введите конец диапазона: ";
    std::cin >> end;
    std::cout << "Введите число: ";
    std::cin >> num;

    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % end + begin;
        std::cout << arr[i] << " ";
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr[i] < num)
        {
            sum += arr[i];
        }
    }
    std::cout << "\nСумма: " << sum;

    //3

    double arr[12], begin, end, min, max;

    for (int i = 0; i < 12; i++)
    {
        std::cout << "Введите прибыль в " << i + 1 << " месяце: ";
        std::cin >> arr[i];
    }

    std::cout << "Введите начало диапазонп: ";
    std::cin >> begin;
    std::cout << "Введите конец диапазона: ";
    std::cin >> end;

    min = arr[0];
    max = arr[1];

    if (min > max)
    {
        max = min;
        min = arr[1];
    }

    for (int i = begin - 1; i < end; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else if (arr[i] < min)
        {
            min = arr[i];
        }
    }
   
    std::cout << "Месяца с макисмальной прибылью: ";
    for (int i = 0; i < 12; i++)
    {
        if(arr[i] == max)
        {
            std::cout << i + 1 << " ";
        }
    }
    std::cout << "\nМесяца с минимальной прибылью: ";
    for (int i = 0; i < 12; i++)
    {
        if (arr[i] == min)
        {
            std::cout << i + 1 << " ";
        }
    }
    
    return 0;
}

