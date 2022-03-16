#include "../includes.cpp"

bool DieRoll () {

    int yokka, wokka;
    cin >> yokka >> wokka;

    int m = max(yokka, wokka);

    int dotProb = (7 - m);

    if(dotProb == 1) {
        cout << "1/6" << endl;
    } else if (dotProb == 2) {
        cout << "1/3" << endl;
    } else if (dotProb == 3) {
        cout << "1/2" << endl;
    } else if (dotProb == 4) {
        cout << "2/3" << endl;
    } else if (dotProb == 5) {
        cout << "5/6" << endl;
    } else {
        cout << "1/1" << endl;
    }

    return 0;

}