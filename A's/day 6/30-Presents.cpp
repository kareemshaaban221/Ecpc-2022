#include "../includes.cpp"

bool Presents () {

    int n;
    cin >> n;

    int arr[n];

    forn(i, n) cin >> arr[i];

    vector <int> res(n, 0);
    forn(i, n) {
        res[arr[i] - 1] = i + 1;
    }

    for(int i : res) {
        cout << i << ' ';
    }

    cout << endl;

    return 0;
}