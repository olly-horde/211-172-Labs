#include <iostream>

int main() {
    
    int a = 1011;

    int* pntr = &a;

    std:: cout << pntr << " " << *pntr << '\n';

    *pntr = 2000;

    std:: cout << a << '\n';


    int arr[3] = {3, 2, 1};

    for (int i = 0; i < 3; i++) std:: cout << *(arr + i) << " ";

    std:: cout << '\n';


    int b = 5;

    int* const secnd_pntr = &b;


    // secnd_pntr = &a <- ошибка!

    *secnd_pntr = 6;

    std:: cout << b << '\n';

    return 0;

}