#include "../includes.cpp"

bool IsYourHorseshoeOnTheOtherHoof () {

    int s[4];

    forn(i, 4) {
        cin >> s[i];
    }

    sort(s, s+4);

    int count = 0;
    forn(i, 3) {
        if(s[i] == s[i + 1]){
            count++;
        }
    }

    cout << count << endl;

    return 0;

}