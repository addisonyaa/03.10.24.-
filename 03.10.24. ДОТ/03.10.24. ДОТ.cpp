#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a1 [] = {5, -18, 12, 9, 3, -16, 15, -8, 7};
    float Sum = { 0.0 };
    float sred = { 0.0 };
    //a1[5] = { 5 }; // изменяем значение элемента массива      
    /*
    for (int i : a1)
    {
        Sum += i;
        //cout << "Значение: " << i << endl;  
    }
    sred = Sum / 6;
    cout << "Сумма = " << Sum << " \t Среднее значение = " << sred << endl;
    */      
    int Max1 = a1[0]; int Min1 = a1[0];

    for (size_t i = 0; i < 6; i++)
    {
        if (a1[i] > Max1)
        {
            Max1 = a1[i];   
        }
        else if (a1[i] < Min1)
        {
            Min1 = a1[i];
        }
        //cout << "Индекс = " << i << "\t Значение = " << a1[i] << endl;
    }
    cout << "Макс число = " << Max1 << "\t Мин значение = " << Min1 << endl;
    
}
