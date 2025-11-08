
#include <bits/stdc++.h>
#include<vector>
#include<deque>
using namespace std;

int findval(const string &s) {


    if (s == "A") return 1;

    if (s == "J") return 11;

    if (s == "Q") return 12;
    if (s == "K") return 13;
    return stoi(s);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    vector<pair<int, int>> p1Cards, p2Cards;
    for (int i = 0; i < n; ++i) {
        string c1, c2;
        int s1, s2;
        if (!(cin >> c1 >> s1 >> c2 >> s2)) return 0;
        p1Cards.emplace_back(findval(c1), s1);
        p2Cards.emplace_back(findval(c2), s2);
    }

    vector<int> suitvalue(5);
    for (int i = 0; i < 4; ++i) {
        int k;
        cin >> k;
        suitvalue[k] = 4 - i;
    }

    auto cmp = [&](pair<int, int> a, pair<int, int> b) {
        if (a.first != b.first) return a.first < b.first;
        return suitvalue[a.second] < suitvalue[b.second];
    };

    sort(p1Cards.begin(), p1Cards.end(), cmp);
    sort(p2Cards.begin(), p2Cards.end(), cmp);

    deque<pair<int, int>> deck[2];
    for (auto &x : p1Cards) deck[0].push_back(x);
    for (auto &x : p2Cards) deck[1].push_back(x);

    vector<pair<int, int>> pile;
    int turn = 0;

    while (true) {
        if (deck[turn].empty()) {
            if (deck[0].empty() && deck[1].empty()) cout << "TIE";
            else cout << (turn == 0 ? "LOSER" : "WINNER");
            return 0;
        }

        auto card = deck[turn].front();
        deck[turn].pop_front();

        bool win = false;
        if (!pile.empty()) {
            auto top = pile.back();
            if (top.first == card.first &&
                suitvalue[card.second] > suitvalue[top.second])
                win = true;
        }

        pile.push_back(card);

        if (win) {
            sort(pile.begin(), pile.end(), cmp);
            for (auto &x : pile)
                deck[turn].push_back(x);
            pile.clear();
        } else {
            turn ^= 1;
        }
    }
}