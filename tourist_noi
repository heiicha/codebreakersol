#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n{}, x{}, y{};
    cin >> n >> x >> y;

    vector<int> trips(n);
    for (int i = 0; i < n; i++) {
        cin >> trips[i];
    }

    int sum{};
    for (int i = 0; i < n; i++){
        if (trips[i]*x < y) { 
            sum += trips[i]*x;
        } else {
            sum += y;
        }
    }

    cout << sum << endl;
    
    
    return 0;
} 
