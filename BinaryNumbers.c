
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int n;
    cin >> n;

    int rem=0, s=0, t=0;

    while(n>0)
        {
        rem = n%2;
        n=n/2;
        if(rem == 1)
            {
            s++;
            if(s >=t)
                {
                t=s;
            }
        }
        else
        {
           s=0;
        }
    }

    cout<<t;

    return 0;
}
