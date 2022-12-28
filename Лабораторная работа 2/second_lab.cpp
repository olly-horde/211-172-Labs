#include<iostream>

int main() {
    setlocale(LC_ALL, "rus");

    int a;
    while (true) {
        std:: cout << "Введите целое положительное число: ";
        std:: cin >> a;
        if (a > 0) break;
    }
    int sm = 0;
    for (int nm = 1; nm <= a; nm++) {
        sm += nm;
    }
    std:: cout << "Сумма всех чисел от 1 до введённого числа: " << sm << '\n';

    int arr[10];
    for (size_t i = 0; i < 10; i++) arr[i] = i * i;

    std:: cout << "Все 10 чисел из массива: ";
    for (size_t i = 0; i < 10; i++) std:: cout << arr[i] << " ";
    std:: cout << '\n';

    std:: cout << "Числа, стоящие на чётных позициях: ";
    for (size_t i = 0; i < 10; i++) {                
        if (i % 2 == 0) std:: cout << arr[i] << " "; 
    }
    std:: cout << '\n';
    
    sm = 0;
    for (size_t i = 0; i < 10; i++) {                
        if (i % 2 == 1) sm += arr[i];               
    }
    std:: cout << "Сумма элементов на нечётных позициях: " << sm;
    return 0;
}
