#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
unordered_map<string, int> umap;
string a[] = {"주홍철", "양영주", "박종선"};
int main() {
    for (int i = 0; i < 3; i++) {
        mp.insert({a[i], i + 1});
        mp[a[i]] = i + 1;
    }

    cout << mp["kundol"] << "\n";
    mp["kundol"] = 4;
    cout << mp.size() << "\n";
    mp.erase("kundol");

    auto it = mp.find("kundol");
    // cout << it << "\n";
    if (it == mp.end()) {
        cout << "못찾겠네 꾀꼬리\n";
    }

    mp["kundol"] = 100;
    it = mp.find("kundol");
    if (it != mp.end()) {
        cout << (*it).first << " : " << (*it).second << "\n";
    }
    for (auto it : mp) {
        cout << it.first << " : " << it.second << "\n";
    }

    for (auto it = mp.begin(); it != mp.end(); it++) {
        cout << (*it).first << " : " << (*it).second << "\n";
    }
    mp.clear();

    umap["bcd"] = 1;
    umap["aaa"] = 1;
    umap["aba"] = 1;
    for (auto it : umap) {
        cout << it.first << " : " << it.second << "\n";
    }
    return 0;
}
