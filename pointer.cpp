#include <bits/stdc++.h>
using namespace std;
int i;
int main() {
    cout << &i << "\n";
    i = 0;
    int *a = &i;
    cout << &i << "\n";
    cout << *a << "\n";
}