#include<iostream>
#include<iomanip>

int main() 
{
    setlocale(LC_ALL, "rus");

    double num1, num2;

    std:: cin >> num1 >> num2;

    std:: cout << "Среднее арифметическое двух введённых чисел: " << (num1 + num2) / 2;

    std:: cout << '\n' << "Введите знак операции: +, -, * или /:";

    char nc; std:: cin >> nc;


    double answer;

    bool error = false;

    // if (nc == '*') answer = num1 * num2;                    <- условный оператор
    // else if (nc == '+') answer = num1 + num2;
    // else if (nc == '-') answer = num1 - num2;
    // else if (nc == '/') answer = num1 / num2;
    // else error = true;

    switch (nc) 
    {
        case '+': answer = num1 + num2; break;             // <- switch-case

        case '-': answer = num1 - num2; break;

        case '*': answer = num1 * num2; break;

        case '/': answer = num1 / num2; break;

        default: error = true;
    }

    if (error == false) std:: cout << num1 << " " << nc << " " << num2 << " = " << answer;

    else std:: cout << "Неправильный формат ввода\n";
    
    return 0;
}
