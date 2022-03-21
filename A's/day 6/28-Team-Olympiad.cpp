#include "../includes.cpp"

bool TeamOlympiad () {

    int n; cin >> n;

    pair<short, bool> arr[n]; // student category & status (selected OR not selected)

    forn(i, n) {
        cin >> arr[i].first;
        arr[i].second = false; // not selected at a team yet
    }

    vector < vector <int> > teams;
    forn(i, n) {

        if(!arr[i].second) // if the student is not selected at a team yet
            arr[i].second = true; // consider the student is selected
        else continue; // ignore

        vector <int> team; // vector of the team
        team.push_back(i); // the first student

        bool one = false, two = false, three = false;
        for(int j = i + 1; j < n && team.size() < 3; j++) {
            if(arr[j].second) continue;
            else {
                if(arr[j].first == arr[i].first) continue; // ignore if the student have the same category of the first student selected
                else {
                    if(arr[j].first == 1 && !one){
                        team.push_back(j);
                        one = !one;
                        arr[j].second = true;
                    }
                    else if (arr[j].first == 2 && !two) {
                        team.push_back(j);
                        two = !two;
                        arr[j].second = true;
                    }
                    else if (arr[j].first == 3 && !three) {
                        team.push_back(j);
                        three = !three;
                        arr[j].second = true;
                    }
                }
            }
        }

        if(team.size() == 3) // ignore if the team is not 3
            teams.push_back(team);
        else break; // ignore all upcomming possible teams because them must be < 3, as well
    }

    cout << teams.size() << endl;

    for(auto team : teams) {
        for(int i : team) {
            cout << i + 1 << ' ';
        }
        cout << endl;
    }

    return 0;
}