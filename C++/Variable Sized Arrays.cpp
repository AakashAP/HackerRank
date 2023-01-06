#include <vector>
#include <iostream>
using namespace std;


int main() {
    int n, q;
    cin >> n >> q;
    
    vector<vector<int>> arr(n);
    
    for(int i=0; i<n; i++) {
        int l;
        cin >> l;
        arr[i].resize(l);
        for (int j=0; j<l; j++) {
            cin >> arr[i][j];
        }
    }
    
    for(int i=0; i<q; i++) {
        int x, y;
        cin >> x >> y;
        cout << arr[x][y] << "\n";
    }
    
    return 0;
}