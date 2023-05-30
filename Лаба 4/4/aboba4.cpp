#include <iostream>
#include <math.h>

using namespace std;
extern "C" float integral_calc(int a, int b);

int main(int argc, char** argv)
{
    int a = 0;
    int b = 0;
    double answer = 0.0;

    cout << "Input:" << endl;//логируем начало программы

    cout << "a:";
    cin >> a;//верхний аргумент интеграла
    cout << "b:";
    cin >> b;//нижний аргумент интеграла

    cout << endl;

    answer = integral_calc(a, b);

   cout << "Result: " << answer << endl;

    return 0;
}

extern "C" float fun_el(int x) {
    float f;
    f = powf(log(x), 1.0f / 3.0f);
    return f;
}
