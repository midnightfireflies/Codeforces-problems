#include <iostream>
#include <vector>
#include <string>

using namespace std;



int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for(int i = 0; i < t; i++) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int j = 0; j < n; j++) {
            cin >> arr[j];
        }
        int max = arr[0];
        for(int j = 1; j < n; j++) {
            if(arr[j] > max) {
                max = arr[j];
            }

        }
        cout <<"Case " << i + 1 << ": " << max << endl;
    }

}

