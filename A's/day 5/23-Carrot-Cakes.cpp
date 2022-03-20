#include "../includes.cpp"

bool CarrotCakes () {

    int n, k, t, d; cin >> n >> t >> k >> d;


    int nOfbakes = (int) ceil( (double)n / k );

    // cout << nOfbakes << endl;

    if(nOfbakes <= 1) {
        cout << "NO" << endl;
        return 0;
    }

    int turns = floor(d / t) + 1;

    // cout << turns << endl;

    if(turns < nOfbakes) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}