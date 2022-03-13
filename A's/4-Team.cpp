#include "includes.cpp"

bool Team () {

    int n;

    cin >> n;

    int res = 0; // no of probs implemented
    for (int i = 0, c, in; i < n; i++) {

        c = 0;

        cin >> in;
        if (in == 1) c++;
        cin >> in;
        if (in == 1) c++;
        cin >> in;
        if (in == 1) c++;

        if(c > 1) res++;
        
    }

    cout << res << endl;
    

    return 0;
}