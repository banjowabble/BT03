#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int n; cin >> n;
    int a[n]; bool seen[10000];
    for (int i=0; i<10000; i++) seen[i] = false;
    for (int i=0; i<n; i++)
    {
        cin >> a[i];
        if (seen[a[i]])
        {
            cout << "yes";
            return 0;
        }
        else seen [a[i]]= true;
    }
    cout << "no";
    return 0;
}
