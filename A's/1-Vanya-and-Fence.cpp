#include "includes.cpp"

bool VanyaAndFence () {

    int n, h;

    cin >> n >> h;

    int roadWidth = 0;
    for(int i = 0, a; i < n; i++) {
        cin >> a;

        if(a > h){
            roadWidth += 2;
        } else {
            roadWidth++;
        }

    }

    cout << roadWidth << endl;

    return 0;
}