#include "../includes.cpp"

bool Games () {

    int n; cin >> n;

    vector <int> hostUniforms(n, 0);
    vector <int> guestUniforms(n, 0);
    forn(i, n) {
        cin >> hostUniforms[i];
        cin >> guestUniforms[i];
    }

    int res = 0;
    for(int i : hostUniforms) {
        for(int j : guestUniforms) {
            if(i == j) res++;
        }
    }

    cout << res << endl;

    return 0;

}