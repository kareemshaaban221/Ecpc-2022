#include "../includes.cpp"

bool Juicer () {

    int n, b, d, wastePocket = 0, res = 0, temp; cin >> n >> b >> d;
    forn(i, n) {
        cin >> temp;

        if(temp <= b) {
            wastePocket += temp;
        }

        if(wastePocket > d) {
            wastePocket = 0;
            res++;
        }
    }
    
    cout << res << endl;

    return 0;

}