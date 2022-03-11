#include <iostream>

using namespace std;

bool BeautifulMatrix () {

    int arr[5][5];
    
    int r = 0, c = 0;
    for(int i = 0; i < 5; i++){ // input
        for(int j = 0; j < 5; j++){

            int current = arr[i][j];

            cin >> current;

            if(current) {
                r = i;
                c = j;
            }

        }
    }

    // processing
    int moves = 0;
    if(r == 2 && c == 2) {
        ;
    } else {
        if (r > 2) {
            moves += r-2;
        } else {
            moves += 2-r;
        }

        if(c > 2) {
            moves += c-2;
        } else {
            moves += 2-c;
        }
    }

    cout << moves << endl;

    return 0;
}