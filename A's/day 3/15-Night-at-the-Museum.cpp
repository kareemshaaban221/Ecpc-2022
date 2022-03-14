#include "../includes.cpp"

bool NightAtTheMuseum () {

    string s; cin >> s;

    int current = 0;

    int totalRot = 0, charIndex, indexdiff;
    forn(i, s.length()) {
        charIndex = s[i] - 'a';
        indexdiff = abs(charIndex - current);
        if( indexdiff > 12 ) {
            totalRot += 25 - indexdiff + 1;
        } else {
            totalRot += indexdiff;
        }

        current = charIndex;
    }

    cout << totalRot << endl;

    return 0;

}