#include "includes.cpp"

bool Magnets () {

    int n; cin >> n;

    string s;
    cin >> s;

    string temp;
    int groups = 1;
    forn (i, n - 1) {
        cin >> temp;
        if (temp != s) {
            s = temp;
            groups++;
        }
    }

    cout << groups << endl;

    return 0;
}