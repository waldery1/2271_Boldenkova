// Различие 2: верхняя граница to вычисляется один раз при старте (__n = to)
#include <iostream>
using namespace std;

int get_to() {
    cout << "get_to() called" << endl;
    return 3;
}

int main() {
    // В цикле forc:
    // граница вычисляется ровно один раз при инициализации int __n = to;
    int __i = 0, __n = get_to();
    for (const int &i = __i; i < __n; __i++) {
        cout << "i = " << i << endl;
    }

    return 0;
}