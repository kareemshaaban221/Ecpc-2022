#include "../includes.cpp"

bool WayTooLongWords () {

    
    int n; cin >> n;

    string abbr[n] , s;
    forn(i, n) {
        cin >> s;
        if(s.length() > 10) {
            abbr[i] = string(1, s[0]) + to_string(s.length() - 2) + s[s.length() - 1];
        } else {
            abbr[i] = s;
        }
    }

    for(string i : abbr) {
        cout << i << endl;
    }

    return 0;
}