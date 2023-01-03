#include <bits/stdc++.h>
using namespace std;
struct Ralo {
    int a, b;
    double c, d, e;
};

struct Point {
    int y, x, z;
    Point(int y, int x, int z) : y(y), x(x), z(z){};
    Point() {
        y = -1;
        x = -1;
        z = -1;
    }
    bool operator<(const Point &a) const {
        if (x == a.x) {
            if (y == a.y)
                return z < a.z;
            return y < a.y;
        }
        return x < a.x;
    }
};
void print(Ralo ralo) {
    cout << ralo.a << " " << ralo.b << " " << ralo.c << " " << ralo.d << " "
         << ralo.e << "\n";
}

int main() {
    Ralo ralo = {1, 1, 1, 1, 1};
    print(ralo);
    vector<Ralo> ret;
    ret.push_back({1, 2, 3, 4, 5});
    ret.push_back({1, 2, 3, 4, 6});
    ret.push_back({});
    ret.push_back({1, 3});
    for (Ralo ralo : ret) {
        print(ralo);
    }
    return 0;
}