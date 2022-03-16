#include "../includes.cpp"

bool ColorfulStonesSimplifiedEdition () {

    string s, t;
    cin >> s >> t;

    int tLen = t.length(), j = 0; // instructions string
    forn(i, tLen) {
        if(t[i] == s[j]) {
            j++;
        }
    }

    cout << j + 1 << endl;

    return 0;

}