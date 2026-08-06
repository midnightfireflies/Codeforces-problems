#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t, count = 0;
    cin >> t; 
    vector<int> team1(t), team2(t);
    for (int i = 0; i < t; ++i) {
        cin >> team1[i] >> team2[i];
    }
    sort(team1.begin(), team1.end());
    sort(team2.begin(), team2.end());
    for(int i = 0; i < t; ++i) {
        for(int j = 0; j < t; ++j) {
            if(team1[i] == team2[j]) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
