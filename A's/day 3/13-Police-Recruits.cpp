#include "../includes.cpp"

bool PoliceRecruits () {

    int n; cin >> n;

    int in;
    int officers = 0, untreated = 0;
    forn (i, n) {
        cin >> in;
        if(in != -1) officers += in;
        else {
            if(officers) {
                officers--;
            }
            else {
                untreated++;
            }
        }
    }

    cout << untreated << endl;

    return 0;

}