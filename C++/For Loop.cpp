#include <iostream>
using namespace std;

#define Out(x) cout<<x<<"\n";

int main() {
    int a,b;
    cin >> a >> b;
    for(int i=a; i<=b; i++)
    {   if(i<10)    
        {   if(i==1)    Out("one")
            else if(i==2)    Out("two")
            else if(i==3)    Out("three")
            else if(i==4)    Out("four")
            else if(i==5)    Out("five")
            else if(i==6)    Out("six")
            else if(i==7)    Out("seven")
            else if(i==8)    Out("eight")
            else if(i==9)    Out("nine")
        }
        else
        {   if(i%2 == 0) Out("even")
            else Out("odd")
        }
    }
    return 0;
}