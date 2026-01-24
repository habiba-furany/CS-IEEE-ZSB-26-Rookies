#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<long long> cities(n), towers(m);
    for(int i = 0; i < n; i++) cin >> cities[i];
    for(int i = 0; i < m; i++) cin >> towers[i];

    long long r = 0;

    for(int i = 0; i < n; i++) {
        int low = 0, high = m - 1;
        long long distance = 10e17;

        while(low <= high) {
            int mid = low + (high - low) / 2;

            if(towers[mid] == cities[i]) {
                distance = 0;
                break;
            } else if(towers[mid] < cities[i]) {
                distance = min(distance, (long long)(cities[i] - towers[mid]));
                low = mid + 1;
            } else {
                distance = min(distance, (long long)(towers[mid] - cities[i]));
                high = mid - 1;
            }
        }

        r = max(r, distance);
    }

    cout << r;
    return 0;
}