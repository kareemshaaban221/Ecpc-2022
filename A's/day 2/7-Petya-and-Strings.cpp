#include "../helperFunctions.cpp"

bool PetyaAndStrings () {

    string s1, s2;

    cin >> s1 >> s2;

    s1 = toLowerCase(s1);
    s2 = toLowerCase(s2);
    
    forn( i, s1.length() ) {
        if(s1[i] > s2[i]) {
            cout << 1 << endl;
            return 0;
        }
        else if (s1[i] < s2[i]) {
            cout << -1 << endl;
            return 0;
        }
    }

    cout << 0 << endl;

    return 0;
}