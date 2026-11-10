// Различие 1: переменная i объявлена как const int& и ее нельзя изменить внутри тела цикла
#include <iostream>
using namespace std;

int main() {
    int from = 0, to = 5;

    // В обычной инструкции for переменную цикла можно менять:
    for (int i = from; i < to; i++) {
        // i = 10; // скомпилируется
    }

    // В цикле forc:
    // int __i = from, __n = to;
    // for (const int &i = __i; i < __n; __i++) {
    //     i = 10; // Ошибка компиляции: i является константной ссылкой
    // }

    cout << "Difference 1: i is constant inside the loop body" << endl;
    return 0;
}