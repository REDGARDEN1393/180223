//ФУНКЦИИ


//программа
//процедура-набор команд не возвращающий результат своей работы
//функция- набор команд сообщающий вызвашему его алгоритму результат своей работы 


#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
//return_type name(args..) {тело функции}
//discription
void FillRandomDigits(int arr[], int lenght)
{
    srand(time(NULL));
    for (int i = 0; i < 10; i++)
    {
        arr[i] = rand() % 10;
    }
}
void Print(const int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << ' ';
    }
}
void PrintSeparator(char sep, int count)
{
    cout << '\n';
    for (int i = 0; i < count; i++)
    {
        cout << sep;
    }
    cout << "\n";
}

bool isGrowOrder(int a, int b)
{
   /* if (a < b)
    {
        return true;
    }
    else
    {
        return false;
    }*/
    return a<b;
}

void Swap(int &a, int &b)
{
    int tmp{ a };
    a = b;
    b = tmp;
}

void BubbleSort(int arr[], int leght)
{

    for (int i = 0; i < leght; i++)
    {
        for (int j = 0; j < leght - 1; j++)
        {
            if (!isGrowOrder (arr[j] , arr[j + 1]))
            {
                Swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[10]{};
    FillRandomDigits(arr, 10);
    Print(arr, 10);
    PrintSeparator('-', 20);
    BubbleSort(arr, 10);
    Print(arr, 10);
    PrintSeparator('-', 20);
   /* for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << "\n___________________________\n";

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10-1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp{ arr[j] };
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << ' ';
    }
    cout << "\n___________________________\n";*/

    return 0;
}
