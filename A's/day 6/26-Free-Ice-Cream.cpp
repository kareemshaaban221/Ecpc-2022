#include "../includes.cpp"

bool HelpfulMathsFreeIceCream () {

    ll n, x; cin >> n >> x;

    ll distressed = 0, in;

    char c;
    forn(i, n) {
        cin >> c >> in;

        if(c == '+') {
            x += in;
        } else {
            if(x >= in) {
                x -= in;
            } else distressed++;
        }
    }

    cout << x << ' ' << distressed << endl;

    return 0;
}