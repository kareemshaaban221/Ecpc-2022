#include "../includes.cpp"

bool NewPassword () {

    int n, k;

    cin >> n >> k;


    string res = "";


    for(int i = 0, j = 0; i < n; i++, j++) {
        if (j == k) j = 0;
        res.push_back( j + 'a' );
    }

    cout << res << endl;
    

    return 0;
}