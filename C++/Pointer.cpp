#include <iostream>

void update(int *a,int *b) {
    int t;
    t=*a;    *a+=*b;    *b=t-*b;
    if(*b<0)    *b=-*b;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    cin >> a >> b;\
    update(pa, pb);
    cout << a << "\n" << b;

    return 0;
}