#include <iostream>   
using namespace std;

void diapazon(int* a, int n) {
    for (int i = 0; i < n; i++) {
        a[i] = 0 + rand() % (20);
        cout << a[i] << " ";
    }
}

int main() {
    srand((unsigned)time(NULL));
    const int n = 10;
    int a[n];

    diapazon(a, n);
    return 0;
}
