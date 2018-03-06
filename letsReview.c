#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin>>N;
    vector<string> vec(N);

    for(int i=0; i<N; i++)
    {
        cin>>vec[i];
    }

    string s;

    for(int i=0; i<N; i++)
    {
        s = vec[i];
        string even;
        string odd;

        for(int j=0; j<s.length(); j++)
        {
            if((j%2)==0)
            {
               even = even + s[j];
            }
            else
            {
                odd = odd + s[j];
            }
        }
        cout<<even<<" "<<odd<<endl;
    }

    return 0;
}
