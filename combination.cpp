#include <bits/stdc++.h>
using namespace std;
vector<int> v;
vector<int> b;
bool visited[4];

void printV() {
    for (int i = 0; i < v.size(); i++) {
        if (visited[i])
            cout << v[i] << " ";
    }
    cout << "\n";
}

void printB() {
    for (int i = 0; i < b.size(); i++) {
        cout << b[i] << " ";
    }
    cout << "\n";
}

void comb(int d, int n, int r, int idx) {
    if (d >= r) {
        printV();
        return;
    }

    for (int i = idx; i < v.size(); i++) {
        if (visited[i])
            continue;
        visited[i] = true;
        comb(d + 1, n, r, i + 1);
        visited[i] = false;
    }
}

void comb2(int d, int n, int r, int idx) {
    if (d >= r) {
        printB();
        return;
    }

    for (int i = idx; i < v.size(); i++) {
        b.push_back(v[i]);
        comb2(d + 1, n, r, i + 1);
        b.pop_back();
    }
}
int main() {
    for (int i = 1; i <= 5; i++) {
        v.push_back(i);
    }

    // comb(0, 5, 3, 0);
    comb2(0, 5, 3, 0);
    return 0;
}