#include "../includes.cpp"

bool AntonAndDanik () {

    int n;

    cin >> n;

    int a = 0, d = 0;
    char res;
    for(int i = 0; i < n; i++) {
        cin >> res;

        if(res == 'A')  a++;
        else            d++;

    }

    if(a > d)
        cout << "Anton\n";
    else if (d > a)
        cout << "Danik\n";
    else
        cout << "Friendship\n";

    return 0;
}