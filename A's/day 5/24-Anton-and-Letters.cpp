#include "../includes.cpp"

bool AntonAndLetters () {


    string s;

    getline(cin, s);

    vector <int> alpha(26, 0);

    for(int i = 1; i < s.length() - 1; i++) {
        if(s[i] == ' ' || s[i] == ','){
            continue;
        }

        alpha[s[i] - 'a']++;
    }

    int res = 0;
    for(int i : alpha) {
        if(i > 0) res++;
    }

    cout << res << endl;

    return 0;
}