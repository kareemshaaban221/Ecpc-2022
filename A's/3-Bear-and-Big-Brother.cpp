#include <iostream>

using namespace std;

bool BearAndBigBrother () {

    int n, m;

    cin >> n >> m;

    int years = 0;
    while (true) {
        n *= 3;
        m *= 2;

        years++;

        if(n > m) break;
    }

    cout << years << endl;

    return 0;
}