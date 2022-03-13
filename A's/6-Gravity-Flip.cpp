#include "includes.cpp"

using namespace std;

bool GravityFlip () {

    int n;
    cin >> n;

    vector <int> v;
    for(int i = 0, temp; i < n; i++) {
        cin >> temp;
        v.push_back(temp);
    }

    sort(v.begin(), v.end());

    for (int i : v) {
        cout << i << ' ';
    }

    return 0;
}