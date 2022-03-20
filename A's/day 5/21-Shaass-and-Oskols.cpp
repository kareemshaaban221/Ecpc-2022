#include "../includes.cpp"

bool ShaassAndOskols () {

    int n, m; cin >> n;

    int wires[n];
    forn(i, n) {
        cin >> wires[i];
    }

    cin >> m;
    
    int hits[m][2];
    forn(i, m) {
        cin >> hits[i][0] >> hits[i][1];
    }

    int wire = 0, index = 0;
    forn(i, m) {
        wire = hits[i][0] - 1, index = hits[i][1];

        if(index > 1) {
            if(wire - 1 >= 0) {
                wires[wire - 1] += index - 1;
            }
        }

        wires[wire + 1] += wires[wire] - index;

        wires[wire] = 0;
    }

    forn(i, n) {
        cout << wires[i] << endl;
    }

    return 0;

}