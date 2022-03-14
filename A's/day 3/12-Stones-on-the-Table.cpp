#include "../includes.cpp"

bool StonesOnTheTable () {

    int n; cin >> n;
    
    string s; cin >> s;

    int res = 0;
    forn (i, s.length() - 1) {
        if(s[i] == s[i+1]) {
            res++;
        }
    }

    cout << res << endl;

    return 0;
}