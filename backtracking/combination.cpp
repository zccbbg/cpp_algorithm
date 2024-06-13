// 例5.2

#include <cstdio>
#include <iostream>
#include <iomanip>
using namespace std;

int num = 0, a[10001] = {0}, n = 5, r = 4;
bool b[10001] = {0};

void search(int k);
void print();

int main() {
    search(1);
    cout << "number=" << num << endl;
}

void search(int k) {
    int i;
    for (i = 1; i <= n; i++) {
        if (!b[i]) {
            a[k] = i;
            b[i] = 1;
            if (k == r) {
                print();
            } else {
                search(k + 1);
            }
            b[i] = 0;
        }
    }
}

void print() {
    num++;
    for (int i = 1; i <= r; i++) {
        cout << setw(3) << a[i];
    }
    cout << endl;
}

