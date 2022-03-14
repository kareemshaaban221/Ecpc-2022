#include "../includes.cpp"

bool SerejaAndDima () {

    int n; cin >> n;
    
    vector <int> arr(n, 0);
    forn (i, n) {
        cin >> arr[i];
    }

    int ser = 0, dima = 0;

    int first = 0, last = n - 1;

    bool serTurn = 1;

    while (first < last) {
        if (arr[first] > arr[last]){
            if (serTurn)
                ser += arr[first];
            else
                dima += arr[first];
            first++;
        }
        else {
            if (serTurn)
                ser += arr[last];
            else
                dima += arr[last];
            last--;
        }

        serTurn = !serTurn;
    }

    if (first == last) {
        if (serTurn) {
            ser += arr[first];
        } else {
            dima += arr[first];
        }
    }

    cout << ser << ' ' << dima << endl;

    return 0;
}