#include <bits/stdc++.h>
using namespace std;
vector<int> v;
bool visited[3];
void print(vector<int> &v, int r) {
    for (int i = 0; i < r; i++) {
        cout << v[i] << " ";
    }
    cout << "\n";
}
void makePerm(int d, int n, int r) {
    if (d == r) {
        print(v, r);
        return;
    }

    for (int i = d; i < n; i++) {
        swap(v[i], v[d]);
        makePerm(d + 1, n, r);
        swap(v[i], v[d]);
    }
}

int main() {
    for (int i = 1; i <= 4; i++)
        v.push_back(i);

    makePerm(0, 4, 3);
}
