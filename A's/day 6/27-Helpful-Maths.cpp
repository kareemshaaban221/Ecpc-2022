#include "../includes.cpp"

bool HelpfulMaths () {

    string s;
    cin >> s;
    
    vector <short> v;
    forn(i, s.length()) {
        if(s[i] == '+') continue;

        v.push_back(s[i]);
    }

    sort(v.begin(), v.end());

    short l = v[v.size() - 1];
    v.pop_back();

    for(short i : v){
        cout << (char)i << '+';
    }

    cout << (char)l << endl;

    return 0;
}