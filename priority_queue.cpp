#include <bits/stdc++.h>
using namespace std;
priority_queue<int, vector<int>, greater<int>> pq;
priority_queue<int> pq2;
priority_queue<int, vector<int>, less<int>> pq3;
int main() {
    for (int i = 5; i >= 1; i--) {
        pq.push(i);
        pq2.push(i);
        pq3.push(i);
    }
    while (pq.size()) {
        cout << pq.top() << " : " << pq2.top() << " : " << pq3.top() << "\n";
        pq.pop();
        pq2.pop();
        pq3.pop();
    }
    return 0;
}