// 역참조 연산
#include <bits/stdc++.h>
using namespace std;
// int main() {
//     string a = "abcda";
//     string *b = &a;
//     cout << b << "\n";
//     cout << *b << "\n";
// }

// pair<int, int> a = {1, 2};
// int main() {
//     pair<int, int> *b = &a;
//     cout << b->first << "\n";
//     cout << (*b).first << "\n";
// }

int a[3] = {1, 2, 3};
int main() {
    int *b = &a[0];
    int *c = a;
    int *d = a + 1;
    cout << b << "\n";
    cout << c << "\n";
    cout << d << "\n";
    cout << &a[1] << "\n";
}