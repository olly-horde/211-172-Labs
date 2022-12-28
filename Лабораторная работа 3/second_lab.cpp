#include <iostream>

int sum(int* begin, int* end) {

    int sum = 0;

    for (auto it = begin; it != end; it++) {

        sum += *it;

    }

    return sum;

}

int two_params_sum(int first, int second) {

    return first + second;

}

int two_params_diff(int first, int second) {

    return first - second;

}

int (*char_func(char c))(int, int) {

    if (c == '+') return two_params_sum;

    return two_params_diff;
}

int main() {

    int arr[3] = {4, 5, 6};

    std:: cout << sum(arr, (arr + 3)) << '\n';


    char c = '-';

    auto func_pointer = char_func(c);

    std:: cout << func_pointer(1, 5) << '\n'; // разность


    c = '+';

    std:: cout << char_func(c)(1, 5) << '\n';         // сумма


    float* f = new float(23.23);

    std:: cout << *f;

    delete f;

    return 0;
    
}