#include "includes.cpp"

string toLowerCase(string s) {
    int l = s.length();
    forn (i, l) {
        if (s[i] < 'a') { 
            s[i] = s[i] + ('a' - 'A');
        }
    }

    return s;
}

string toUpperCase(string s) {
    int l = s.length();
    forn (i, l) {
        if (s[i] > 'Z') { 
            s[i] = s[i] - ('a' - 'A');
        }
    }

    return s;
}