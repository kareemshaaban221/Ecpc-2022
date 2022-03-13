#include "helperFunctions.cpp"

bool Word () {

    string s;

    cin >> s;

    int uppercount = 0, lowercount = 0;
    for( char c : s ) {
        if(c > 'Z') {
            lowercount++;
        } else {
            uppercount++;
        }
    }

    if (!lowercount || !uppercount) { // special case
        cout << s << endl;
        return 0;
    }

    if (uppercount > lowercount) {
        cout << toUpperCase(s) << endl;
    } else {
        cout << toLowerCase(s) << endl;
    }

    return 0;
}