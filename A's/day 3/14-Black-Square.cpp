#include "../includes.cpp"

bool BlackSquare () {

    int stripsCal[4];

    forn(i, 4) cin >> stripsCal[i];

    string s; cin >> s;

    int res = 0;
    forn(i, s.length()) {
        res += stripsCal[s[i] - '1'];
    }

    cout << res << endl;

    return 0;

}