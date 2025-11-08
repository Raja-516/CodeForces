#include <bits/stdc++.h>
using namespace std;

int main() {
    ios :: sync_with_stdio(false);
    cin.tie(nullptr);

    int total;
    cin >> total;

    vector < pair < int , int > > firstList(total);
    vector < pair < int , int > > secondList(total);
    set < int > allPoints;

    // Reading first group
    for (int i = 0; i < total; i++) {
        cin >> firstList[i].first >> firstList[i].second;
        allPoints.insert(firstList[i].first);
        allPoints.insert(firstList[i].second);
    }

    // Reading second group
    for (int i = 0; i < total; i++) {
        cin >> secondList[i].first >> secondList[i].second;
    }

    vector < int > allNodes(allPoints.begin(), allPoints.end());

    // Function to make pairs sorted
    auto sortPairs = [&](vector < pair < int , int > > arr) {
        for (int i = 0; i < (int)arr.size(); i++) {
            if (arr[i].first > arr[i].second) {
                swap(arr[i].first , arr[i].second);
            }
        }
        sort(arr.begin(), arr.end());
        return arr;
    };

    // Function to create a string form
    auto makeString = [&](vector < pair < int , int > > arr) {
        string s = "";
        for (int i = 0; i < (int)arr.size(); i++) {
            s += to_string(arr[i].first) + "-" + to_string(arr[i].second) + ",";
        }
        return s;
    };

    vector < pair < int , int > > sortedFirst = sortPairs(firstList);
    vector < pair < int , int > > sortedSecond = sortPairs(secondList);

    string firstStr = makeString(sortedFirst);
    string secondStr = makeString(sortedSecond);

    if (firstStr == secondStr) {
        cout << 0;
        return 0;
    }

    map < string , int > visited;
    queue < pair < vector < pair < int , int > > , int > > q;

    q.push({sortedFirst , 0});
    visited[firstStr] = 0;

    while (!q.empty()) {
        vector < pair < int , int > > nowList = q.front().first;
        int steps = q.front().second;
        q.pop();

        map < int , vector < int > > connect;
        for (auto p : nowList) {
            connect[p.first].push_back(p.second);
            connect[p.second].push_back(p.first);
        }

        set < vector < int > > cyclesFound;

        for (int node : allNodes) {
            vector < int > path;
            set < int > used;

            function < void (int , int) > dfs = [&](int current , int parent) {
                path.push_back(current);
                used.insert(current);

                for (int next : connect[current]) {
                    if (next == parent) continue;
                    if (used.count(next)) {
                        auto it = find(path.begin(), path.end(), next);
                        if (it != path.end()) {
                            vector < int > cycle(it, path.end());
                            if ((int)cycle.size() >= 3) {
                                int minIndex = min_element(cycle.begin(), cycle.end()) - cycle.begin();
                                rotate(cycle.begin(), cycle.begin() + minIndex, cycle.end());
                                cyclesFound.insert(cycle);
                            }
                        }
                    } 
                    else if ((int)path.size() < (int)allNodes.size()) {
                        dfs(next , current);
                    }
                }

                path.pop_back();
                used.erase(current);
            };

            dfs(node , -1);
        }

        for (auto cycle : cyclesFound) {
            map < int , int > change;
            for (int v : allNodes) change[v] = v;

            int len = cycle.size();
            for (int i = 0; i < len; i++) {
                change[cycle[i]] = cycle[(i + 1) % len];
            }

            vector < pair < int , int > > newList;
            for (auto p : nowList) {
                newList.push_back({change[p.first], change[p.second]});
            }

            newList = sortPairs(newList);
            string newStr = makeString(newList);

            if (newStr == secondStr) {
                cout << steps + 1;
                return 0;
            }

            if (!visited.count(newStr)) {
                visited[newStr] = steps + 1;
                q.push({newList , steps + 1});
            }
        }
    }

    cout << -1;
    return 0;
}
