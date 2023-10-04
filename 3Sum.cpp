#include<bits/stdc++.h>
using namespace std;
int testcases;
int n;
int a[500];

int main()
{
    freopen("3Sum.INP", "r", stdin);
    freopen("3Sum.OUT", "w", stdout);
    cin >> testcases;
    for(int itest = 1; itest <= testcases; ++itest)
    {
        cin >> n;
        for(int i = 1; i <= n; ++i)
            cin >> a[i];

        int res = 0;

        for(int i = 1; i <= n; ++i)
        {
            for(int j = i + 1; j <= n; ++j)
            {
                for(int k = j + 1; k <= n; ++k)
                {
                    if(a[i] + a[j] + a[k] == 0) res++;
                }
            }
        }
        cout << "test " << itest << " answer: " << res << endl;
    }
}
