#include "includes.cpp"

bool BoyOrGirl () {

    string s;

    cin >> s;

    vector <int> chars(26, 0);

    forn(i, s.length()) {
        chars[ s[i] - 'a' ]++;
    }

    int c = 0;
    for (int i : chars) {
        if(i > 0) {
            c++;
        }
    }

    switch (c % 2) {
        case 0:
            cout << "CHAT WITH HER!" << endl; break;
        default:
            cout << "IGNORE HIM!" << endl; break;
    }

    return 0;
}