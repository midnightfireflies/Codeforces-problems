#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;



int main() {
    // Optimize standard I/O operations for speed
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k, count = 0;
    cin >> n >> k; 
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    // sort(arr.begin(), arr.end());
    for(int i = 0; i < n; i++) {
        if (arr[i] >= arr[k-1] && arr[i] > 0) {
            count++;
        }
    }
    cout << count << endl;
    
    return 0;
}
