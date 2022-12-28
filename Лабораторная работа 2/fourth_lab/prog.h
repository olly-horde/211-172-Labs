#include <iostream>
#define SUM(a, b) a + b
using namespace std;

void func(int a)
 {
    static int nt = 0;

    cout << SUM(a, nt) << '\n';

    nt = a;
}