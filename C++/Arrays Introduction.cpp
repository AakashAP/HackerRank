#include <iostream>
using namespace std;

int main() {
    int n, a[1000];
    cin >> n;
    for(int i=0; i<n; i++)    cin >> a[n-i-1];
    for(int i=0; i<n; i++)    cou t << a[i] << " ";
    return 0;
}