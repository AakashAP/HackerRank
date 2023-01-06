#include <iostream>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{   a = (a>b) ? a : b;
    c = (c>d) ? c : d;
    return (a>c) ? a : c;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int ans = max_of_four(a, b, c, d);
    cout << ans;
    
    return 0;
}