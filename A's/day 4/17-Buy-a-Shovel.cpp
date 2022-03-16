#include "../includes.cpp"

bool BuyAShovel () {

    int k, r;
    cin >> k >> r;

    bool notFound = true;
    int count = 1, reminder;
    int p = k;
    while(notFound) {
        reminder = p % 10;
        if (reminder == r || !reminder) {
            notFound = false;
        } else {
            count++;
            p = k * count;
        }
    }

    cout << count << endl;

    return 0;

}